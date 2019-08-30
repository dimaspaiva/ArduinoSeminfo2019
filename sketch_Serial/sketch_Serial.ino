void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pin = 0;
  pin = digitalRead(3);
  Serial.println(pin);
  Serial.println("----");
  digitalWrite(4, pin);
  delay(500);
}
