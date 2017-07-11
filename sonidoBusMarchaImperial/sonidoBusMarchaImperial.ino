const int spk=11;
//son las notas musicales ya hechas hertz o algo asi
#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

void setup() {
  pinMode(spk,OUTPUT);
}

void loop() {
  marcha();
}

void beep(unsigned char spk, int frec, long tiempo) {

  int x;
  long pausa =(long)(1000000/frec);
  long ancho=(long)(tiempo*1000)/(pausa*2);
  for(x=0;x<ancho;x++) {
    digitalWrite(spk, HIGH);
    delayMicroseconds(pausa);
    digitalWrite(spk,LOW);
    delayMicroseconds(pausa);
    
  }

  delay(20);
}


void marcha() {
  beep(spk,a,500);
  beep(spk,a,500);
  beep(spk,a,500);
  beep(spk,f,350);

  beep(spk, a, 500);
  beep(spk, f, 350);
  beep(spk, cH, 350);
  beep(spk,a,1000);

  beep(spk, eH, 500);
  beep(spk, eH, 500);
  beep(spk, eH, 500);
  beep(spk, fH, 350);
  beep(spk, cH, 150);

  beep(spk, gS, 500);
  beep(spk, f, 350);
  beep(spk, cH, 150);
  beep(spk, a, 1000);
}

