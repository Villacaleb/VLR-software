/*
VLR, Villa Light Rocket is a model rocket being developed by Caleb Bird this software is used for the parachute deployed system

Developed by Caleb Bird.

Thanks to Jeremy Hall for some help with the code and developing the parashute release system.
*/

#include <Servo.h>
#include <SPI.h>
#include <SD.h>


 
Servo releaseservo;  // create servo object to control a servo
Servo lockservo; 
                // twelve servo objects can be created on most boards
 
int pos = 0;  // variable to store the servo position 
int pos2 = 0;
int ledPin = 13;
int inPin = 7;
int inputsatus = 0;
int val = 0;
boolean launchpermission = false;
void setup() 
{ 
  releaseservo.attach(9);  // attaches the servo on pin 9 to the servo object
  lockservo.attach(10); 
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
  releaseservo.write(pos);
  lockservo.write(pos);
  Serial.begin(38400);
 // dataFile.println("Initializing Parachute Deployment Setup");
} 
 
void loop() 
{ 
  
  val = digitalRead(inPin);
  if(val == high){
      launchpermission == true;
  }
  if(launchpermission == true){
    //dataFile.println("Tesiting motors")
    
    //It will start testing the motors, making sure they are working, you should be able to hear them working, if you cant, then you can shut it off.
    int pos = 100;
    releaseservo.write(pos);
    int pos2 == 100;
    lockservo.write(pos);
    delay(1500); // these delays give it enough time to move.
    int pos = 0;
    releaseservo.write(pos);
    int pos2 == 0;
    lockservo.write(pos);
    delay(1500);
    int pos = 100;
    releaseservo.write(pos);
    int pos2 == 100;
    lockservo.write(pos);
    delay(1500);
    int pos = 0;
    releaseservo.write(pos);
    int pos2 == 0;
    lockservo.write(pos);
    delay(1500);
    
    delay(15000); // Gives you enough time to check the motors.
    
    
    delay(10000);
    // dataFile.println("Deploying Parachute")
    pos = 180;
    releaseservo.write(pos);
  } else {
  }
  
 }
