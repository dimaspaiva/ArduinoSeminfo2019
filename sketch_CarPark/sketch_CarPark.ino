void setup() {
  // Iniciando monitor serial e pinos
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);

  Serial.begin(9600);

  digitalWrite(2, 0);
}

void loop() {
  // Leitura do botão
  int button = digitalRead(3);

  // Exibir acionamento do botão
  Serial.println(button);

  // Decisão de acionamento do botão
  if (button == 1) {
    digitalWrite(2, 1);
  } else {
    digitalWrite(2, 0);
  }

  // Garantir a legibilidade
  delay(500);
  

}
