void setup() {
  // put your setup code here, to run once:
 pinMode(2, OUTPUT);
 digitalWrite(2, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, 1);
  delay(250);
  digitalWrite(2, 0);
  delay(250);
}
