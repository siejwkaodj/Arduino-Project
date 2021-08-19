#include <AFMotor.h>
AF_DCMotor motor(1);

void setup() {
  Serial.begin(9600);
  motor.setSpeed(200);
  motor.run(RELEASE);
  pinMode(13, OUTPUT);
}


void loop() {
  if(Serial.available()){
    //Serial.parseInt > 숫자형 입력 명령어
    int vel = Serial.parseInt();
    motor.run(BACKWARD);
    motor.setSpeed(vel);
    Serial.println(vel);
  }
}
