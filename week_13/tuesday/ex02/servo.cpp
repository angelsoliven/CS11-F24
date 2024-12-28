#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(10);
}

void loop() {
  for (int i = 0; i <= 180; i += 1) {
    servo.write(i);
    delay(15);
  }
  for (int i = 180; i >= 0; i -= 1) {
    servo.write(i);
    delay(15);
  }
}
