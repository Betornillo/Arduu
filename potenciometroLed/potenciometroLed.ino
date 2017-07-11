const int pin=0;
const int pinLed=9;

int brillo=0;
int valor =0;

void setup() {
  pinMode(pin,INPUT);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valor= analogRead(pin);
  brillo= map(valor, 0, 1023, 0, 255);
  analogWrite(pinLed, brillo);

  Serial.print("Valor potenciometro = ");
  Serial.print(valor);
  Serial.print("    BRillo del led = ");
  Serial.println(brillo);
  delay(1000);
  //delay(10);
  //en caso de querer un delay mas fluido hacerlo con 10
}
