
int speakertone, speakerpin, 

Ap1, Bp1, Cp1, Dp1, Ep1, Fp1, Gp1,
A,   B,   C,   D,   E,   F,   G,
An1, Bn1, Cn1, Dn1, En1, Fn1, Gn1,

er, qr, hr, wr;
void setup() {
  // put your setup code here, to run once:
  speakerpin = 13;
  digitalWrite(speakerpin, HIGH);
  pinMode(speakerpin, OUTPUT);
  (Ap1 = 440.00);
  (Bp1 = 493.88);
  (Cp1 = 523.25);
  (Dp1 = 587.33);
  (Ep1 = 659.25);
  (Fp1 = 698.46);
  (Gp1 = 783.99);
  (A = 220.00);
  (B = 246.94);
  (C = 261.63);
  (D = 293.66);
  (E = 329.63);
  (F = 349.23);
  (G = 392.00);
  (An1 = 110.00);
  (Bn1 = 123.47);
  (Cn1 = 130.81);
  (Dn1 = 146.83);
  (En1 = 164.81);
  (Fn1 = 174.61);
  (Gn1 = 196.00);
    
  (er = 75);
  (qr = 150);
  (hr = 300);
  (wr = 600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, C); delay(hr);  noTone(speakerpin); delay(er);
  delay(er); tone(speakerpin, D); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, D); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, D); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, B); delay(wr);  noTone(speakerpin); delay(er);
  delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, C); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, F); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, F); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, F); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Cp1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Cp1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Cp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Ap1); delay(hr); noTone(speakerpin); delay(er);
  delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, B); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, F); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, F); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, F); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, E); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Dp1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Dp1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Dp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Bp1); delay(qr); delay(hr); noTone(speakerpin); delay(er);
  tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Dp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Cp1); delay(hr); tone(speakerpin, Bp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Dp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Cp1); delay(hr); tone(speakerpin, Bp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er); tone(speakerpin, Dp1); delay(qr); noTone(speakerpin); delay(er);
  tone(speakerpin, Cp1); delay(qr); noTone(speakerpin); delay(er); delay(qr);
  tone(speakerpin, Ap1); delay(qr); noTone(speakerpin); delay(er); delay(qr);
  tone(speakerpin, Ep1); delay(qr); noTone(speakerpin); delay(er);
  
  
  
  delay(2000);
}
