#include <SoftwareSerial.h>
//RX 7, TX 8 -> 반대로 연결
//bt(8, 7)로 반대로 작성
SoftwareSerial bt(8, 7);

void setup(){
  Serial.begin(9600);
  bt.begin(9600);
}

void loop(){
  if(bt.available())
    Serial.write(bt.read());

  if(Serial.available())
    bt.write(Serial.read());

}
