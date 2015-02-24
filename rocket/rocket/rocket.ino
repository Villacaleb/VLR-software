/*
VLR, Villa Light Rocket is a model rocket being developed by Caleb Bird this software is used for the parachute deployed system
*/

#include <Servo.h> 
 
Servo releaseservo;  // create servo object to control a servo
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
int ledPin = 13;
int inPin = 7;
int inputsatus = 0;
int val = 0;

void setup() 
{ 
  releaseservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
  releaseservo.write(pos);
} 
 
void loop() 
{ 
  inputsatus = digitalRead(inPin);
  
  if(inputsatus == HIGH){ // The launch controller is contected to the arduino, if there is a pulse, the same one that sets off the ignitor, it will count down 10 seconds (this may change) after 10 seconds, the motor pushes the nose cone out with the parachute.
    val = 1;
  }
  if(val = 1){
    delay(10000);
    pos = 180;
    releaseservo.write(pos);
  } else {
  }
  delay(5000);
  
 }

