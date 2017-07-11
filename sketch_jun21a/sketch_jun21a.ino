void setup() {
  // put your setup code here, to run once:
  pinMode (2, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8, INPUT);
}

void loop() {

  if(digitalRead (8) == HIGH){
    digitalWrite(2, HIGH);
    digitalWrite(3,LOW);
  }
  else {
    digitalWrite (2, LOW);
    digitalWrite (3, HIGH);
  }
  /*
  digitalWrite (2, HIGH);
  digitalWrite(3, LOW);
  delay(3000); 
  digitalWrite (2, LOW);
  digitalWrite (3, HIGH);
  delay(3000);
  */
  // put your main code here, to run repeatedly:

}
