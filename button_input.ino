int led = 11;         //11번핀 -> ledoutput
int button = 8;       //8번핀 -> 버튼input
int i = 0;
int d_i = 0;
int on = 0;


void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  i = digitalRead(button);
  if(i - d_i == 1)
    on = 1 - on;
  digitalWrite(led, on);
  d_i = i;
  delay(1);
}
