#include <AFMotor.h>
#include <Servo.h>

Servo servo1;

void setup() {
  Serial.begin(9600);
  servo1.attach(0);             // 핀 번호 잘 모르겠음
  Serial.println("Servo test");
}
int angle = 0;
int m = 1;
void loop() {
  
  if(m > 0){
    angle += 1;
  }
  else{
    angle -= 1;
  }
  if(angle > 90 or angle < -90)
    m = 1 - m;
  servo1.write(angle);

  Serial.print("angle : ");
  Serial.println(angle);
  delay(100);
}
