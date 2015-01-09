// Music Playing with Piezo and Arduino
// Jordan Secret

int spkr = 11;

//notes
int w = 1000;
int h = 500;
int q = 250;
int e = 125;
int s = 62;

//pitches
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int a4 = 440;
int b4 = 494;
int c5 = 523;

int scale[] = {c4, d4, e4, f4, g4, a4, b4, c4};

void playScale(int note){
  for( int i = 0; i < 8; i++){
    tone(spkr, scale[i], note);
    delay(note);
  }
}

int twinkle[] = {c4,c4,g4,a4,a4,g4,f4,f4,e4,e4,d4,d4,c4};
int twinkleNotes[] = {q,q,q,q,q,q,h,q,q,q,q,q,h};

void playTwinkle() {
  for( int i = 0; i < 13; i++){
    tone(spkr, twinkle[i], twinkleNotes[i]);
    delay(twinkleNotes[i]);
  }
}
int jingle[] = { e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4};
int jingle2[] = {f4, f4, f4, f4, f4, e4, e4, e4, e4, g4, g4, f4, d4, c4};
int jingNotes[] = {q,q,h,q,q,h,q,q,q,q,w};
int jingNotes2[] = {q,q,q,q,q,q,q,q,q,q,q,q,w};
  
void playJingle() {
  for(int i = 0; i< 11; i++){
    tone(spkr, jingle[i], jingNotes[i]);
    delay(jingNotes[i]);
  }
  for(int i = 0; i< 11; i++){
    tone(spkr, jingle[i], jingNotes[i]);
    delay(jingNotes[i]);
  }
  for(int i = 0; i< 13; i++){
    tone(spkr, jingle2[i], jingNotes2[i]);
    delay(jingNotes2[i]);
  }
}
  



int leds[] = {2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2};//led pins

void ledArray(int time) {//does the pin switching
  for(int i = 0; i < 16; i++){
    digitalWrite(leds[i], 1);
    delay(time);
    digitalWrite(leds[i], 0);
    delay(time); 
  }
}


int alarms[] = {8,2,3,4,5,6,7,9,8};
int alarms2[] = {2,3,6,7,4,5,8,9};

void alarm(int style) {
  if(style = 1){
  for(int i = 0; i < 8; i++){
    digitalWrite(alarms[i], 1);
    digitalWrite(alarms[i+1], 1);
    tone(spkr, 150, 200);
    delay(200);
    digitalWrite(alarms[i], 0);
    digitalWrite(alarms[i+1], 0);
    delay(150);
  }
  digitalWrite(alarms[8], 0);
  }
  else if(style = 2){
    for(int i = 0; i < 8; i+=4){
    digitalWrite(alarms2[i], 1);
    digitalWrite(alarms2[i+1], 1);
    digitalWrite(alarms2[i+2], 1);
    digitalWrite(alarms2[i+3], 1);
    tone(spkr, 150, 750);
    delay(750);
    digitalWrite(alarms2[i], 0);
    digitalWrite(alarms2[i+1], 0);
    digitalWrite(alarms2[i+2], 0);
    digitalWrite(alarms2[i+3], 0);
    tone(spkr, 150, 750);
    delay(750);
  }
  }
}

void setup() {
//  playScale(q);
//  playTwinkle();
  //playJingle();
  pinMode(4,1);
  pinMode(5,1);
  pinMode(6,1);
  pinMode(7,1);
  pinMode(8,1);
  pinMode(9,1);
  pinMode(3,1);
  pinMode(2,1);
}

void loop() {
//  for(int z = 0; z < 4; z++){
//  alarm(1);
//  }
  for(int z = 0; z < 4; z++){
   alarm(2);
  }
  
}


//guitar pitches 
//float C = 16.35;
//float Db = 17.32;
//float D = 18.35;
//float Eb = 19.45;
//float E = 20.60;
//float F = 21.83;
//float Gb = 23.12;
//float G = 24.50;
//float Ab = 25.96;
//float A = 27.50;
//float Bb = 29.14;
//float B = 30.87;
//
//int getNote(float n0, int rank){
//  float ans = n0;
//  float pow = 2;
//  for (int i = 0; i< rank; i++){
//    pow = pow*2;
//  }
//  ans = ans*pow;
//  return (int) ans;
//}
//
//int sevNat[] = {22, A, 7, h, A, 7, q, A, 10, q, A, 7, q, A, 5, q, A, 3, q, A, 2, h};
//
//
//void playSong(int song[]){
//  for( int i = 1; i < song[0]; i+= 3){
//    tone(spkr,getNote(A, song[i+1]), song[i+2]);
//    delay(twinkleNotes[i]);
//  }
//  
//}
  

