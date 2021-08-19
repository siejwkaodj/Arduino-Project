#include <Servo.h>
Servo servo;
int motor = 3;
int angle = 90;

void setup() {
  servo.attach(motor);
  Serial.begin(9600);

  Serial.println("Serial Connected");
}
/*
void loop() {
  if(Serial.available()){
    char input = Serial.read();

    if(input == 'u'){
      Serial.println("+15");
      for(int i = 0; i < 15; i++){
        angle += 1;
        if(angle > 180)
          angle = 180;
        servo.write(angle);
        delay(10);
      }
    }
    else if(input == 'd'){
      Serial.println("-15");
      for(int i = 0; i < 15; i++){
        angle -= 1;
        if(angle < 0)
          angle = 0;

        servo.write(angle);
      }
      delay(10);
    }
    else{
      Serial.println("Wrong Character! print 'u' or 'd'");
    }
    Serial.print("input : ");
    Serial.println(input);
  }
}
*/
int i = 1;
void loop(){
  Serial.println(angle);
  
  if(angle > 180 || angle < 0)
    i = 1 - i;
    
  if(i > 0)
    angle += 1;
  else
    angle -= 1;

  delay(200);
}
