#include <AFMotor.h>
AF_DCMotor motor(1);

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);

  motor.setSpeed(300);
  motor.run(RELEASE);
}

void loop() {
  int var = analogRead(A0);
  int vel = (var - 220)*8;
  Serial.print(vel);
  //Serial.print(" ");
  //Serial.println(var);
  //Serial.println(vel);

  motor.run(BACKWARD);
  motor.setSpeed(vel);
}
