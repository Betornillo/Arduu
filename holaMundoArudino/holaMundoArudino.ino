#include <SoftwareSerial.h>

SoftwareSerial chat(10,11);

int text;

void setup() {
  Serial.begin(9600);
  Serial.println("Inicia chat");
  delay(500);
  chat.println("Hola mundo");
}

void loop() {
  if(chat.available()) {
    Serial.write(chat.read());
  }

  if(Serial.available()) {
    Serial.print("Yo:\t");
    while(Serial.available()){
      text= Serial.read();
      chat.write(text);
      Serial.write(text);
    }

    chat.println();
    Serial.println();
  }
}
