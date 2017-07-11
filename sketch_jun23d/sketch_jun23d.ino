#include <SoftwareSerial.h>
#define relay 7
SoftwareSerial BTSerial(4,2); //bluetooth 4->rx 2->tx
char c = ' ';

void setup() {

  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(relay, OUTPUT);
}

void loop() {

  if(BTSerial.available()){
    c = BTSerial.read();
    if(c == '1'){
      digitalWrite(relay,HIGH);
    } else if(c == '0') {
      digitalWrite(relay,LOW);
    }
    Serial.write(c);
  }
  if(Serial.available()) {
      c = Serial.read();
      Serial.write(c);
      BTSerial.write(c);
    }
    
 }

