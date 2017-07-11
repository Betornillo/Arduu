long tiempo;
int disparador = 3;
int entrada = 2;
float distancia;


void setup() {

  pinMode(disparador, OUTPUT);
  pinMode(entrada, INPUT);

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(disparador, HIGH);
  delayMicroseconds(10);
  digitalWrite(disparador, LOW);

  tiempo = (pulseIn(entrada, HIGH)/2);

  distancia = float(tiempo * 0.0343);

  Serial.println(distancia);
  delay(1000);

}
