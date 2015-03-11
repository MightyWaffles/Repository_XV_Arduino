

int LEDPin, SwitchOutPin, SwitchInPin;
//all pins are now in one place

void setup() {
// put your setup code here, to run once
  LEDPin = 13;
  //LED pin chain
  SwitchInPin = 12;
  //input PVsensor
  SwitchOutPin = 11;
  //output PVSensor
  
  pinMode(SwitchInPin, INPUT);
  pinMode(SwitchOutPin, OUTPUT);
  pinMode(LEDPin, OUTPUT);
  
  digitalWrite(SwitchOutPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SwitchInPin) == HIGH) 
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
