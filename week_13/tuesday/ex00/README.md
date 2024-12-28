# Instructions
**Objective:** Use C++ to change the intensity of a light.

## Background information
### Analog values
Digital signals can only have two states: 0 or 1, representing "off" or "on." However, there are many situations where we need a signal that falls between these extremes, known as an analog signal. What are some examples of instances where we may want an analog signal?

Pulse-width modulation (PWM)  is a technique used to simulate an analog signal using a digital signal. It rapidly switches the power on and off, creating a square wave pattern. The proportion of time the signal is "on" versus the total period is called the duty cycle.
![Hardware](/assets/img/duty_cycle.JPG)

In arduino we have the function [`analogWrite()`](https://docs.arduino.cc/language-reference/en/functions/analog-io/analogWrite/#notes-and-warnings) which takes in a `pin` and `value` in which the `value` is a integer number between `0` (always off) and `255` (always on) which represents the duty cycle.

## Steps
1. Go to the Arduino simulator [website](https://wokwi.com/projects/new/arduino-uno).
2. Wire the circuit for a simple LED.
3. Create a global variable for the pin used.
4. Set the `pinMode()` for the pin.
5. Use [`analogWrite()`](https://docs.arduino.cc/language-reference/en/functions/analog-io/analogWrite/) to write increasing values between `0` and `255` to the pin with a slight delay in between. The result should be a light which starts off and then slowly increases to max brightness then repeats.  

## Working example
[`dimmed.cpp` simulated](https://wokwi.com/projects/415014003533562881)

![Hardware](/assets/img/dimmed.png)
