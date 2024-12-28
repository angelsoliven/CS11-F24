int RED = 5;
int GREEN = 6;
int BLUE = 7;

void setup() {
  pinMode(RED,  OUTPUT);              
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}
void loop() {
  set_color(255, 0, 0);
  delay(1000);
  set_color(0,  255, 0);
  delay(1000);
  set_color(0, 0, 255);
  delay(1000);
  set_color(255, 255, 255);
  delay(1000);
  set_color(150, 0, 150);
  delay(1000);
  set_color(127, 127,  127);
  delay(1000);
}
void set_color(int red, int green,  int blue) {
  analogWrite(RED, red);
  analogWrite(GREEN, green);
  analogWrite(BLUE, blue);
}
