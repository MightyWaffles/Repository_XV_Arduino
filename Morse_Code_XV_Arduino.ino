
int morseLED;

void setup() {
  // put your setup code here, to run once:
  morseLED = 13;
  pinMode(morseLED, OUTPUT);
}

void loop() {
  digitalWrite(morseLED, HIGH);
  delay(200);
  digitalWrite(morseLED, LOW);
  delay (600);
  digitalWrite(morseLED, HIGH);
  delay(200);
  digitalWrite(morseLED, LOW);
  delay (600);
  digitalWrite(morseLED, HIGH);
  delay(200);
  digitalWrite(morseLED, LOW);
  delay (600);
  //s 
  
  digitalWrite(morseLED, HIGH);
  delay(600);
  digitalWrite(morseLED, LOW);
  delay (600);
  digitalWrite(morseLED, HIGH);
  delay(600);
  digitalWrite(morseLED, LOW);
  delay (600);
  digitalWrite(morseLED, HIGH);
  delay(600);
  digitalWrite(morseLED, LOW);
  delay (600);
  //o
  
  digitalWrite(morseLED, HIGH);
  delay(200);
  digitalWrite(morseLED, LOW);
  delay (600);
  digitalWrite(morseLED, HIGH);
  delay(200);
  digitalWrite(morseLED, LOW);
  delay (600);
  digitalWrite(morseLED, HIGH);
  delay(200);
  digitalWrite(morseLED, LOW);
  delay (600);
  //s
  
  delay (2000);
  
  // put your main code here, to run repeatedly:

}
