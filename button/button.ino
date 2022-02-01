/* 

 * Button 

 *  

 * Turns on and off a light emitting diode(LED) connected to digital pin 4, 

 * when pressing a pushbutton attached to pin 2. 

 * The circuit: 

 *  - Button terminal 1a connected in series with a 10kOhm resistor to GND 
                                   
 *  - Button terminal 1b connected to pin 2 

 *  - LED cathode connected in series with a 220 Ohm resistor to GND 

 *  - LED anode connected to pin 4 

 *   

 * created 11 sep 2020 

 * by Colin Vinson 

 * modified 12 sep 2021 

 *  

 * https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button 

*/ 

 

// define Arduino pins. NOTE:Constant data type will not change. 

const int led =  4;  // the number of the LED pin 

const int button = 2;  // the number of the pushbutton pin 

const int led2 = 3; // the number of the LED pin

const int button2 = 5; // the number of the pushbutton pin

const int led3 = 6; // the number of the LED pin

const int button3 = 7; // the number of the pushbutton
 

// define global variables 

int buttonState = 0;  // variable for reading the pushbutton status 
int buttonState2 = 0; // variable for reading the pushbotton status
int buttonState3 = 0; // variable for reading the pushbotton status

void setup(){ 

  // initialize the LED pin as an output 

  pinMode(led, OUTPUT); 
  pinMode (led2, OUTPUT) ;
  pinMode (led3, OUTPUT) ;

  // initialize the pushbutton pin as an input 

  pinMode (button, INPUT) ;
  pinMode(button2, INPUT); 
  pinMode (button3, INPUT) ;

 Serial.begin(9600);
 
} 

 

void loop(){ 

  // read the state of the pushbutton value 

  buttonState = digitalRead(button); //HIGH = button depressed 
  buttonState2 = digitalRead(button2); //HIGH = button depressed
  buttonState3 = digitalRead(button3); //HIGH = button depressed

  Serial.print("Button: ") ;
  Serial.println(buttonState) ;

  // check if the pushbutton is pressed. If buttonState is HIGH, turn on LED 

  if (buttonState == HIGH){ 

    digitalWrite(led, HIGH); // turn LED on 
    

  }  

  else{ 

    digitalWrite(led, LOW);  // turn LED off: 

  } 
  if (buttonState2 == HIGH) { 

   
    digitalWrite(led2, HIGH); // turn LED on
   

  }  

  else{ 

    digitalWrite(led2, LOW); // turn led off:
    

  } 
  if (buttonState3 == HIGH){ 

   
    digitalWrite(led3, HIGH); // turn LED on

  }  

  else{ 

    digitalWrite(led3, LOW); // turn led off:

  } 

} 

 
