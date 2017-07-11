#include<SoftwareSerial.h>

int led=13;
int data=0;
int data2=0;

SoftwareSerial seri(11,12);

void setup() {
  //while(!Serial) {
    //;//espera hasta que se conecte a otro puerto serie
 // }

  Serial.begin(9600);
  seri.begin(4800);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    data=Serial.parseInt();
    if(data==1){
      seri.write(1);
    }
    else {
      seri.write(2);
    }
  }

  if(seri.available()>0){
    data2=seri.read();
    if(data2==1){
    digitalWrite(led,HIGH);}
    
   else {
    digitalWrite(led,LOW);
  }
}

}
