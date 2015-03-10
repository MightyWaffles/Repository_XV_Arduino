//this is the code to turn on and off the lights when light level changes
void setup() {
// put your setup code here, to run once

  pinMode(12, INPUT);
  //12 is photovoltaic sensor
  pinMode(13, OUTPUT);
  //13 and ground are the ends of the LED chain
}

void loop() {
// put your main code here, to run repeatedly:

  LSensor = digitalRead(12); //is the Sensor on?
  if (LSensor == LOW)
  {
    digitalWrite(13, HIGH); //turn off the lights when dark
  }
  else
  {
    digitalWrite(13, LOW);
  }
  delay(1000); //wait to conserve energy
}
