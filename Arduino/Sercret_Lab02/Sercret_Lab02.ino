// LED Array Assesment 
//Jordan Secret
//All work here is honestly obtained and is my own.

int leds[] = {2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2};//led pins
int leds2[] = {9,8,7,6,5,4,3,2,2,3,4,5,6,7,8,9};
int speeds[] = {250,100,50};



void ledArray(int time) {//does the pin switching
  for(int i = 0; i < 16; i++){
    digitalWrite(leds[i], 1);
    delay(time);
    digitalWrite(leds[i], 0);
    delay(time); 
  }
}

void ledArray2(int time) {//does the pin switching
  for(int i = 0; i < 16; i++){
    digitalWrite(leds[i], 1);
    digitalWrite(leds2[i], 1);
    delay(time);
    digitalWrite(leds[i], 0);
    digitalWrite(leds2[i], 0);
    delay(time); 
  }
}

void lightening(int time) {//does the pin switching
  for(int i = 0; i < 8; i++){
    digitalWrite(leds[i], 1);
    delay(time); 
  }
  for(int i = 8; i< 16; i++){
    digitalWrite(leds[i], 0);
    delay(time);
  }
}
  
void design(int time) {
  for(int i = 0; i < 4; i++){
    digitalWrite(leds[i], 1);
    digitalWrite(leds2[i], 1);
    delay(time);
  }
  for(int i = 0; i < 4; i++){
    digitalWrite(leds[i], 0);
    digitalWrite(leds2[i], 0);
    delay(time);
  }
  
  
}
  
  


void setup(){
  pinMode(4,1);
  pinMode(5,1);
  pinMode(6,1);
  pinMode(7,1);
  pinMode(8,1);
  pinMode(9,1);
  pinMode(3,1);
  pinMode(2,1);
}

void loop(){
  for(int i = 0; i<5; i++){
    lightening(speeds[1]);
  }
  for(int i = 0; i<5; i++){
    ledArray2(speeds[1]);
  }
  for(int i = 0; i<5; i++){
    design(250);
    design(250);
  }
  for(int i = 0; i<5; i++){
    ledArray(speeds[1]);
  }
  for(int i = 0; i<3; i++){
    ledArray(speeds[i]);
    ledArray2(speeds[i]);
    lightening(speeds[i]);
    design(speeds[i]);
  }
  

}
