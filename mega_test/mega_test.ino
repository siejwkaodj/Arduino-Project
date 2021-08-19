void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

int i = 1;

void loop() {
  if(i > 0)
    digitalWrite(13, 1);
  else
    digitalWrite(13, 0);
  
  Serial.println(i);
  
  i = i * -1;
  delay(500);
} 
