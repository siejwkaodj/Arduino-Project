#include <AFMotor.h>
AF_DCMotor motor(2);

void setup() {
  Serial.begin(9600);
  Serial.println("Motor test");

  motor.setSpeed(200);
  motor.run(RELEASE);
  pinMode(13, OUTPUT);
}

int v = 0;
int i = 0;

void loop() {
  //digitalWrite(13, v);
  if(i > 255 or i < 0){
    v += 1;
    if(v > 3)
      v = 0;
  }
  if(v < 2){
    motor.run(FORWARD);
    motor.setSpeed(i);
  }
  else if(v > 1){
    motor.run(BACKWARD);
    motor.setSpeed(i);
  }
  if(v % 2 == 0)
    i += 1;
  else
    i -= 1;
    
  Serial.print("Speed : ");
  Serial.println(i);
  Serial.print("Mode : ");
  Serial.println(v);
  delay(20);
}
