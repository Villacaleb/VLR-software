/*
VLR, Villa Lite Rocket is a model rocket being developed by Caleb Bird this software is used for the parachute deployed system

Developed by Caleb Bird.

Thanks to Jeremy Hall for some help with the code and developing the parashute release system.
*/

#include <Servo.h>
#include <SPI.h>
#include <SD.h>


 
Servo releaseservo;  // create servo object to control a servos
 
int pos = 0;  // variable to store the servo position 
int ledPin = 13;
int inPin = 7;
int inputsatus = 0;
int val = 0;
boolean launchpermission = false;

void setup() 
{ 
  releaseservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
  releaseservo.write(pos);
  Serial.begin(38400);
 // dataFile.println("Initializing Parachute Deployment Setup");
} 
 
void loop() 
{ 
  
  val = digitalRead(inPin);
  /*
  if(val == LOW){
  launchpermission = true;
  digitalWrite(ledPin, HIGH);
  }
  */
  
  if(val == LOW){
    //dataFile.println("Tesiting motors")
    digitalWrite(ledPin, HIGH);
    //It will start testing the motors, making sure they are working, you should be able to hear them working, if you cant, then you can shut it off.
    pos = 35;
    digitalWrite(ledPin, HIGH);
    releaseservo.write(pos);
    delay(1500); // these delays give it enough time to move.
    pos = 10;
    digitalWrite(ledPin, LOW);
    releaseservo.write(pos);
    delay(1500);
    pos = 35;
    digitalWrite(ledPin, HIGH);
    releaseservo.write(pos);
    delay(1500);
    pos = 10;
    digitalWrite(ledPin, LOW);
    releaseservo.write(pos);
    delay(1500);
    pos = 35;
    digitalWrite(ledPin, HIGH);
    releaseservo.write(pos);
    delay(1500);
    pos = 10;
    digitalWrite(ledPin, LOW);
    releaseservo.write(pos);
    delay(1500);
    pos = 35;
    digitalWrite(ledPin, HIGH);
    releaseservo.write(pos);
    delay(1500);
    pos = 10;
    digitalWrite(ledPin, LOW);
    releaseservo.write(pos);
    delay(1500);
    
    delay(15000); // Gives you enough time to check the motors.
    // the motors move into place.
    int pos = 0;
    releaseservo.write(pos);
    if(val == LOW){
    digitalWrite(ledPin, HIGH);
    delay(3000);
    digitalWrite(ledPin, LOW);
    delay(30000); //30 second countdown to run away
    
    // for debugging, this means its launching
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    
    delay(10000); //the engines burn time
    // datafile.println("unlocking parachute");
    delay(800); // gives it enough time to unlock, then deploys the parachute
    
    // dataFile.println("Deploying Parachute")
    pos = 180;
    releaseservo.write(pos);
    delay(7000);
    
    while(true){ // Need to make sure the arduino and everything survived...
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    
    pos = 100;
    releaseservo.write(pos);
    delay(1500); // these delays give it enough time to move.
    pos = 10;
    releaseservo.write(pos);
    delay(1500);
    }
    }
 }
}
