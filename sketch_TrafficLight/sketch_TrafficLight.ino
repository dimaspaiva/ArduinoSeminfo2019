void setup() {
  // put your setup code here, to run once:
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 digitalWrite(2, 0);
 digitalWrite(3, 0);
 digitalWrite(4, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  digitalWrite(4, 1);
  delay(1200);
  digitalWrite(4, 0);
  digitalWrite(3, 1);
  delay(750);
  digitalWrite(3, 0);
}
