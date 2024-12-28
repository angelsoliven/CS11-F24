int BUTTON = 12;
int LED = 8;
int onOrOff = LOW;
int oldValue = LOW;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // Read input from the button pin
  int value = digitalRead(BUTTON);
  // If the value is HIGH (pressed) and the value is not the same as the old value
  if(value && value != oldValue) {
    // Opposite of previous value
    onOrOff = !onOrOff;
    // Turn LED either on or off
    digitalWrite(LED, onOrOff);
  }
  // Remember old value
  oldValue = value;
  // Wait
  delay(100);
}