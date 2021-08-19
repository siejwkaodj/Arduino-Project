//Bluetooth 모듈 HC-06 Test Program 
// Android APP is BT Chat App
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello!");
  Serial1.begin(9600);
}
 
void loop() {
  //BT -> Serial
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  //Serial -> BT
  if (Serial.available()) {
    Serial1.write(Serial.read());
  
 }
}
