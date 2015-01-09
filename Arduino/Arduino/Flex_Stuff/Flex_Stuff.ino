int flexSensorPin = A0; //analog pin 0
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int a4 = 440;
int b4 = 494;
int c5 = 523;
void flexLight(){
  int fsd = analogRead(flexSensorPin);
  int sensor = map(fsd, 110, 335, 0, 10);
  Serial.println(fsd);
  int pitch;
  if(sensor  == 10 || sensor == 9){
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    pitch = 0; 
  }
  else if(sensor  == 7 || sensor == 8){
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    pitch = 0;
  }
  else if(sensor  == 5 || sensor == 6) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
    pitch = g4;
  }
  else if(sensor  == 3 || sensor == 4) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    pitch = a4;
  }
  else if(sensor  == 1 || sensor == 2) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(9, 1);
    digitalWrite(8, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    pitch = c4;
  }
  tone(11, pitch, 10);
  delay(10);
}

void flexBackForth() {
  int flexRead = analogRead(flexSensorPin);
  int sensor = map(flexRead, 110, 335, 0, 8);
  //int pitch = map(flexRead, 110, 335, 200,1000);
  if(sensor  = 4){
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
  }
  else if(sensor = 5){
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
  }
  else if(sensor = 6) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
  }
  else if(sensor = 7) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
  }
  else if(sensor = 8) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(9, 1);
    digitalWrite(8, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
  }
  else if(sensor = 3){
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(9, 1);
    digitalWrite(8, 1);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
  }
  else if(sensor = 2) {
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(9, 1);
    digitalWrite(8, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
  }
  else if(sensor = 1) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(9, 1);
    digitalWrite(8, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
  }
  else if(sensor = 0) {
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(9, 1);
    digitalWrite(8, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
  }
  //tone(11, pitch, 50);
}

void flexRound(){
  int led[] = {2,3,4,5,6,7,9,8};
  for(int i = 0; i < 8, i > -1; i+= 0){
    int flexRead = analogRead(flexSensorPin);
    int sensor = map(flexRead, 110, 335, 0,10);
    int spd;
    if(sensor > 5){
      i = i + 1;
      spd = (-37*sensor) + 250;
    }
    else if(sensor < 5) {
      i = i - 1;
      spd = (-45 * sensor) + 250;
    }
    digitalWrite(led[i],1);
    delay(spd);
    digitalWrite(led[i],0);
  }
}

void setup(){
  Serial.begin(9600);
  pinMode(4,1);
  pinMode(5,1);
  pinMode(6,1);
  pinMode(7,1);
  pinMode(8,1);
  pinMode(9,1);
  pinMode(3,1);
  pinMode(2,1);
  pinMode(11,1);
}

void loop(){
  flexLight();
  //flexBackForth();
  //flexRound();
 }
