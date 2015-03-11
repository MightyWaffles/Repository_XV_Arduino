

int LEDPin, PVinPin, PVoutPin;
//all pins are now in one place

void setup() {
// put your setup code here, to run once
  LEDPin = 13;
  //LED pin chain
  PVinPin = 12;
  //input PVsensor
  PVoutPin = 8;
  //output PVSensor
  
  pinMode(PVinPin, INPUT);
  pinMode(PVoutPin, OUTPUT);
  pinMode(LEDPin, OUTPUT);
  
  digitalWrite(PVoutPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PVinPin) == HIGH) 
  {
    digitalWrite(LEDPin, HIGH);
  } 
  else
  {
    digitalWrite(13, LOW);
  }
  delay(1000);
  //wait to conserve energy
}
