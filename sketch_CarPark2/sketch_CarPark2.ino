void setup() {
  // Definindo portas e startando a serial
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  digitalWrite(2, 0);
}

void loop() {
  // Lendo a entrada analógica e salvando na variável
  int sensor = analogRead(A0);

  // Exibindo no monitor serial o valor (debug)
  Serial.println(sensor);
  Serial.println("--");

  // Lógica para acionamento do LED verde
  if (sensor > 300) {
    digitalWrite(2, 1);
  } else {
    digitalWrite(2, 0);
  }

  // Parada para garantir a legibilidade
  delay(500);
}
