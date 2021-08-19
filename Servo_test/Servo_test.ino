#include <Servo.h>       // 서보관련 라이브러리 사용하려고
 
Servo mg995;             // 서보 변수 선언
const int servoPin = 10; // 서보 핀
 
void setup() {
  mg995.attach(servoPin);  // 서보로 10핀을 사용하겠다고 설정
}
 
void loop() {
  mg995.write(0);          // 0도로 이동
  delay(1000);             // 1초 대기
  mg995.write(120);        // 120도로 이동
  delay(1000);           
  mg995.write(300);        // 300도로 이동
  delay(1000);             // 1초 대기하고 다시 처음으로 돌아감 무한 반복
}
