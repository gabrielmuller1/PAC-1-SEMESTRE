// Desenvolvido por Santiago Fleitas
// Projeto: Sensor de luminosidade
// Os valores vão de 0 a 1023 na porta lógica de 10bits(A0)
// No console do serial será informado valores númericos que expressaram quanta luminosidade há no ambiente
// Por exemplo, um ambiente oscuro pode estar em 0, um ambiente iluminado pode indicar 100.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int LDR = analogRead(A0); // criando variável LDR para simplificar na hora de trabalhar com a porta lógica A0.
  Serial.println(LDR);
  delay(2000);
}
