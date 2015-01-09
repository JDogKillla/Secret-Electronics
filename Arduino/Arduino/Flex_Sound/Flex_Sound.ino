int flexSensorPin = A0; //analog pin 0

void flexSound(){
  int flexRead = analogRead(flexSensorPin);
  int sensor = map(flexRead, 512, 614, 100, 200);
  tone(11, sensor*2, 50);
}

void setup(){
  pinMode(11,1);
}

void loop(){
  flexSound();
 }
