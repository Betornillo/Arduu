const int pin=9;
int brillo;

void setup() {
  Serial.begin(9600);
  Serial.println("Envia un numero entre 0 y 9");
  pinMode(pin, OUTPUT);
  
}

void loop() {
  if(Serial.available()) {
    brillo= Serial.parseInt();
    brillo= map(brillo, 0, 9, 0, 255);
    brillo= constrain(brillo,0,255);
    Serial.println(brillo);
    analogWrite(pin, brillo);
  }
}
