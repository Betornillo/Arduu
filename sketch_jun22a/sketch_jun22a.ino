const int pin=A0;
float valor=0;
//este codigo es de un potenciometro, algo así como la ruedita del volumen de los estereos
void setup() {
  // put your setup code here, to run once:

  pinMode(pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

valor = analogRead(pin);
valor = (5.0 * valor)/1023; 
Serial.print("Valor del sensor = ");
Serial.println(valor);

delay(1000);

}
