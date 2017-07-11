volatile int contador = 0;
int n = 0;
const byte interrupcionPin = 2;
volatile long T0 = 0;
void setup() {
Serial.begin(9600);
pinMode(interrupcionPin,INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(interrupcionPin), ServicioBoton,FALLING);
}

void loop() {
if(n!=contador) {
  Serial.println(contador);
  n=contador;
}
}

void ServicioBoton() {
  if(millis() > T0 + 250){
  contador++;
  T0 = millis();
}
}
