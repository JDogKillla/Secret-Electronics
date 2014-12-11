// LED Array Assesment 
//Jordan Secret
//All work here is honestly obtained and is my own.

int leds[] = {2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2};

void ledArray() {
  for(int i = 0; i < 16; i++){
    digitalWrite(leds[i], 1);
    delay(250);
    digitalWrite(leds[i], 0);
    delay(250); 
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
  ledArray();
}
