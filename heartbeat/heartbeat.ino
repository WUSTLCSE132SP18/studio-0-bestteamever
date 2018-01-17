void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

int time = 0;
void loop() {
  delay(1000);
  time = time + 1;
  Serial.print(time);
  Serial.println("sec have elasped");
  digitalWrite(13,HIGH);
  delay(1000);
  time = time + 1;
  digitalWrite(13,LOW);
  Serial.print(time);
  Serial.println("sec have elasped");
}
