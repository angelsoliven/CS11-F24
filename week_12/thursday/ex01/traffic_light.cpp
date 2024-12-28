void setup() {
    pinMode(12, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(8, OUTPUT);
}

void loop() {
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);

    digitalWrite(10, HIGH);
    delay(250);
    digitalWrite(10, LOW);

    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
}
