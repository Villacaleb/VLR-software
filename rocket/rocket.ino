/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Sweep
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
  
  if(inputsatus == HIGH){
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

