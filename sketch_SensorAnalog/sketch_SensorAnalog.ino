int sensor = 0;

void setup() {
  // Iniciando a porta serial
  Serial.begin(9600);
}

void loop() {
  // Lendo entrada da porta analógica
  sensor = analogRead(A0);

  // Imprimindo entrada
  Serial.println(sensor);
  Serial.println("---");

  // Temporizador para garantir a legibilidade
  delay(500);
}
