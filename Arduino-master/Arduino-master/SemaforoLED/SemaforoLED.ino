// Projeto: Semáforo LED (Versão rápida)
// Desenvolvido por Santiago Fleitas

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  //Sequencia 1 - IDA (VERM > AMARE > VERDE)
  digitalWrite(13, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(12, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(11, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  //Sequencia 2 - VOLTA (VERDE > AMARE > VERM)
  
  digitalWrite(11, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(12, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
}
