#define izquierda 5
#define derecha 6

void setup() {
  // put your setup code here, to run once:
pinMode(izquierda,OUTPUT);
pinMode(derecha,OUTPUT);
}

void loop() {
digitalWrite(izquierda,HIGH);
digitalWrite(derecha,LOW);
delay(2000);
digitalWrite(izquierda,LOW);
digitalWrite(derecha,HIGH);
delay(2000);

}
