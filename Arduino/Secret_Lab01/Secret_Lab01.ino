//jordan secret lab01

String characters[] = {"James Bond", "Han Solo", "Matt Damon", "Jennifer Anniston", "Jennifer Lawrence"};

void printHappy(String name) {
  String result = "Happy Birthday " + name;
  Serial.println(result);
}

void func1() {
  Serial.println("I am an Arduino and I communicate at"); 
  Serial.println("9600 Baud rate. Ports 0 and 1 are used");
  Serial.println("for serial communication");
  Serial.println("Serial communication works well for debugging");
  Serial.println("and monitoring sensor values during the");
  Serial.println("execution of a program.");
}

void func2a(int x, int y){
  Serial.println((x/2)*y);
}

void func2b(int x, int y){
  Serial.println(2*x + x*y);
}

void func3(){
  Serial.println("My favorite movie characters are:");
  for(int i = 0; i < 5; i++){
    Serial.println(characters[i]);
  }
}

void func4(){
  int integers[] = {1,2,3,4,5,6,7,8};
  for(int i = 0; i < 8; i++){
    Serial.println(integers[i]);
  }
  for(int i = 7; i > -1; i--){
    Serial.println(integers[i]);
  }
  for(int i = 1; i < 8; i+= 2) {
    Serial.println(integers[i]);
  }
  for(int i = 0; i < 8; i+= 2) {
    Serial.println(integers[i]);
  }
  for(int i = 6; i > -1; i-= 2) {
    Serial.println(integers[i]);
  }
  for(int i = 7; i > 0; i-= 2) {
    Serial.println(integers[i]);
  }
}

void func5(){
  String scale[] = {"C", "D", "E", "F", "G", "A", "B", "C"};
  for(int i = 0; i < 8; i++) {
    Serial.println(scale[i]);
  }
  for(int i = 7; i > -1; i--) {
    Serial.println(scale[i]);
  }
}

void printFibo(int n){
  int holder[] = { 0, 1, 1};
  for( int t = 0; t < n; t++){
    holder[2] = holder[0] + holder[1];
    Serial.println(holder[2]);
    holder[0] = holder[1];
    holder[1] = holder[2];
  }
}

float findAdjacent(int h, float r){
  return cos(r)*h;
}
  
void func8() {
 for (int i = 0; i < 10000; i++) {
 i = i * 10;
 Serial.println(i);
 }
}
//a. multpiples of ten
//b. multiples of ten and eleven
//c. becasue he multiplied i instead of a diff num, box pattern, switch the integer for i

void func9(int maxNum){
  int sum = 0;
  for(int i = 0; i < maxNum; i+= 3) {
    sum = sum + i;
  }
  for(int i = 0; i < maxNum; i+= 5) {
    sum = sum + i;
  }  
  Serial.println(maxNum);
}

String randoms[] = {"hello ", "dog ", "Mouse ", "bannana ", "simulation ", "vegetable ", "colours ", "likes ", "monkey "};

void func10(int num){
  String concs[] = {"blue ", "", "mathematical ", "", "", "righteous ", "", "", "nonsense "};
  Serial.println("");
  for (int i = 0; i < num; i++){
    Serial.print(randoms[random(9)] + concs[random(9)]);
  } 
}




void setup(){
  Serial.begin(9600);
  Serial.println("hello");
  printHappy("Christopher");
  Serial.println("func1");
  func1();
  Serial.println("Func2a");
  func2a(120,512);
  Serial.println("Func2b");
  func2b(97, 32);
  Serial.println("Func3");
  func3();
  Serial.println("Func4");
  func4();
  Serial.println("Func5");
  func5();
  Serial.println("Func6");
  printFibo(10);
  Serial.println("Func7");
  findAdjacent(20, 3.0);
  Serial.println("Func8");
  func8();
  Serial.println("Func9");
  func9(1000);
  Serial.println("func10");
  func10(9);
}


void loop(){
  
}
