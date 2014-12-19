//Jordan Secret
//LED Blink Program
int led = 13; 
int pattern[] = {1000, 250, 250, 250, 250, 1000};


void setup() {
  pinMode(led, OUTPUT);
  pinMode(9,1);
  
}

void blinkLed(){
  digitalWrite(9,1);
  delay(1000);
  digitalWrite(9,0);
  delay(1000);
}

void blinkFast(){
  digitalWrite(9,1);
  delay(50);
  digitalWrite(9,0);
  delay(50);
}

void loop() {
//  for(int i = 0; i < 6; i++){
//    digitalWrite(led, HIGH);
//    delay(pattern[i]);
//    digitalWrite(led, LOW);
//    delay(100); 
//  }
blinkLed();
blinkFast();
}
