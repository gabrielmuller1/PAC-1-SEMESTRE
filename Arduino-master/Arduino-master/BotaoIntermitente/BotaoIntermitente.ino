// Projeto: Mudança de estado do LED regulado por um botão
// Desenvolvido por Santiago Fleitas

int led = 2; // Pino 2
int botao = 3; // Pino 3
int pressionado = 0; // Estado do botão
int ligado = 0; //Variavel de Alternancia do Estado do LED, será 0 ou 1

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // LED é saída de informação
  pinMode(botao, INPUT); // BOTÃO é entrada de informação
}

void loop() {
  // put your main code here, to run repeatedly:
  pressionado = digitalRead(botao);
  if (pressionado == HIGH) { //Se o botão for pressionado, LIGADO
    delay(500); //Tempo para o Arduino entender o sinal
    
    switch (ligado) { //Alternar os estados do LED
      case 0: // Caso 0: o LED vai ligar, quando o BOTÃO for APERTADO
        digitalWrite(led, HIGH); //LED vai LIGAR
        ligado = 1;
        break;
      case 1: // Caso 1: o LED vai desligar, quando o BOTÃO for APERTADO
        digitalWrite(led, LOW); //LED vai DESLIGAR
        ligado = 0;
        break;      
    }
  }
}
