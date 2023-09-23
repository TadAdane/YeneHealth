void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH);
  delay(400);
  digitalWrite(7, LOW);
  delay(400);
  digitalWrite(10, HIGH);
  delay(400);
  digitalWrite(10, LOW);
  delay(400);
  digitalWrite(12, HIGH);
  delay(400);
  digitalWrite(12, LOW);
  delay(400);
}
