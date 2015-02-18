#include <Servo.h>

Servo servoA;
Servo servoB;

void setup() {
  servoA.attach(6);
  servoB.attach(5);
  servoA.write(0); // ServoA
  delay(2000);
  servoB.write(0);  //ServoB
  delay(2000);
  servoA.write(180);
  servoB.write(180);
  delay(4000);
  servoA.write(0);
  servoB.write(0);
  delay(3000);
  servoA.write(180);
  delay(1000);
  servoB.write(180);
  delay(1000);
}

void loop() {
    delay(100000);
    servoA.write(0);
    servoB.write(180);
    delay(1000);
    servoA.write(90);
    servoB.write(90);
}

