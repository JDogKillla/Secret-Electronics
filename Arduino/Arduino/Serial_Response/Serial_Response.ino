

byte byteRead;

void echo() {
  if(Serial.available()) { 
    byteRead = Serial.read();
    Serial.write(byteRead);
  }
}


void lisSer(){
  byte byteRead;
  String command;
  int b; 
  if(Serial.available()){
    byteRead = Serial.read();
    command = "" + byteRead;
    b = 0;
  }
  while(b = 0) {
    if( command == "led 11 ON"){
      digitalWrite(11,1);
    }
    else if(command == "led 11 OFF") {
      digitalWrite(11,0);
    }
    else if(command == "led 12 ON"){
      digitalWrite(12,1);
    }
    else if(command == "led 12 OFF"){
      digitalWrite(12,0);
    }
    b = 1;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  echo();
  
}
