int flexSensorPin = A0; //analog pin 0

void flexSound(){
  int flexRead = analogRead(flexSensorPin);
  int sensor = map(flexRead, 512, 614, 0, 100);
  tone(11, sensor*4, 50);
}

void setup(){
}

void loop(){
  flexSound();
 }
