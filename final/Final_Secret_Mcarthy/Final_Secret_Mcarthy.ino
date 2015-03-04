//Final Project
//Jordan Secret + Will Mcarthy 



#include <Servo.h>

 unsigned long echo = 0;
 int ultraSoundSignal = 3; // Ultrasound signal pin
 unsigned long ultrasoundValue = 0;
  
 unsigned long ping(){
 pinMode(ultraSoundSignal, OUTPUT); // Switch signalpin to output
 digitalWrite(ultraSoundSignal, LOW); // Send low pulse
 delayMicroseconds(2); // Wait for 2 microseconds
 digitalWrite(ultraSoundSignal, HIGH); // Send high pulse
 delayMicroseconds(5); // Wait for 5 microseconds
 digitalWrite(ultraSoundSignal, LOW); // Holdoff
 pinMode(ultraSoundSignal, INPUT); // Switch signalpin to input
 digitalWrite(ultraSoundSignal, HIGH); // Turn on pullup resistor
  // please note that pulseIn has a 1sec timeout, which may
  // not be desirable. Depending on your sensor specs, you
  // can likely bound the time like this -- marcmerlin
  // echo = pulseIn(ultraSoundSignal, HIGH, 38000)
  echo = pulseIn(ultraSoundSignal, HIGH); //Listen for echo
  ultrasoundValue = (echo / 58.138); //convert to CM then to inches
 return ultrasoundValue;
 }
 
 boolean go() { 
  if(digitalRead(5) == 1){return true;}
  else{return false;}
}
  
 int pingAvg() { //averages 5 pings
  int avg = 0;
  for(int i = 0; i < 5; i++){
   avg = avg + (int) ping();
  } 
  avg = (int) avg / 5 ;
  return avg;
 }
 
 
 Servo Micro;
 Servo Left;
 Servo Right;
  
 int bill[] = {0,0,0,0,0};
 int angs[] = {-30, -15, 0, 15, 30};
 int otherAngs[] = {-20,-10,0,10,20};
 
 int microAng = 90;
 int dspd = 0;
 
 void microSweep(int num){
   Micro.write(90 + angs[num]);
   delay(50);
   bill[num] = pingAvg(); 
 }
 
 int smallest(){
   int place = 0;
   for(int i = 0; i<5; i++){
     if(bill[i] < bill[place]) {
       place = i;
     }
   }
   return place;
 }
    //Right.attach(9);
   // Left.attach(10);
   // Left.write(0);
   // Right.write(180);
 void turn(int x){
   if(bill[x] > 10){
    Right.attach(9);
    Left.attach(10);
    Left.write(30 + -1*(otherAngs[smallest()]));
    Right.write(150 - otherAngs[smallest()]);
 
   }
   else{
     Left.detach();
     Right.detach();
   }
 }
      
 
 
 
 void setup(){
   Serial.begin(9600);
   pinMode(ultraSoundSignal,OUTPUT);
   Micro.attach(11);
 }
 
 void loop(){
    for(int i = 0; i < 5; i++){
    microSweep(i); 
    }
    turn(smallest());
 }
