int PIN = 6;

void setup() {
  pinMode(PIN, OUTPUT);

}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(PIN, i);
    delay(20);
  }
}