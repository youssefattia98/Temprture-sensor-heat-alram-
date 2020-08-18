/*
 Author: Youssef Attia
 Description: heat alarm using LM35 sensor
*/
float adc, temp;
void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  adc = analogRead(A0);
  temp = (adc * 500) / 1023.0;
  Serial.println(temp);
  if (temp > 50) {
    digitalWrite(13, HIGH);
  }
  else if (temp < 50) {
    digitalWrite(13, LOW);
  }
  delay(1000);
}
