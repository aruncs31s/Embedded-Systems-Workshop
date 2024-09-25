#include <ESP32Servo.h>

Servo servo;

void setup() {

servo.attach(2);
servo.write(0);
delay(2000);
servo.write(180);
delay(2000);

}

void loop() {

for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
    servo1.write(posDegrees);
    Serial.println(posDegrees);
    delay(20);
  }

  for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
    servo1.write(posDegrees);
    Serial.println(posDegrees);
    delay(20);
  }
}

