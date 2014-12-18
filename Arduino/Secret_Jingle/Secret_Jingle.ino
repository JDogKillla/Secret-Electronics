// Jordan Secret
// Jingle bell 

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


void setup() {
  playJingle();
}

void loop() {
  
}

