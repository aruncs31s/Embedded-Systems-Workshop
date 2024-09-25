#include <ESP32Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(5,500,2500);  // (pin, min, max)
}

void loop() {
  myservo.write(0);  // tell servo to go to a particular angle
  delay(1000);
  
  myservo.write(90);              
  delay(1500); 
  
  myservo.write(135);              
  delay(1500);
  
  myservo.write(180);              
  delay(5000);                     
}
