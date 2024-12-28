void setup() {
    // Set pin 11 to be an output pin
    pinMode(11, OUTPUT);
}

void loop() {
    // Set pin 11 to high (on)
    digitalWrite(11, HIGH);
    // Delay half a second
    delay(500);
    // Set pin 11 to low (off)
    digitalWrite(11, LOW);
    // Delay half a second
    delay(500);
}
