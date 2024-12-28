# Instructions
**Objective:** Use C++ to interact with hardware.

## Background information
### What is an Arduino Uno
A [microcontroller](https://en.wikipedia.org/wiki/Microcontroller) (or MCU) is a very small computer on an integrated circuit. It contains a CPU(s), memory and programmable I/O. The [Ardunio Uno](https://store.arduino.cc/products/arduino-uno-rev3) is a common microcontroller which is programmed in a language based very closely off C++. It may be used to control LEDs, motors, read data from sensors, display information on screens, and control robots. We will be using a simulated Arduino Uno provided by the following website: [Wokwi](https://wokwi.com/projects/new/arduino-uno).
### What is a resistor 
A resistor is an electrical component whose purpose is to limit the flow of electrical current, or applies resistance. In this case, it will limit the amount of current passing through the LED to prevent it from burning out. 
### What is an LED
LED stands for Light Emitting Diode. It is a semi-conductor which emits light when electricity passes through it.
### What is a circuit
A circuit is a complete cyclic path electricity flows through. It may consist of multiple electronic components connected together by a conductive material (often wires) but it must begin with a device which provides energy and ends at ground.
### Putting it all together: Simple LED circuit
Our LED circut will get power from one of the Ardunio I/O pins, that current will pass through a  220 $\Omega$ resistor, then through the LED and back to ground located on the Arduino.
### Putting it all together: Make the LED blink
We could power an LED with just a battery, resistor, and some wires. But the advantage of using an arduino which has a CPU which can be used to control and process signals. As mentioned previously, Arduino code is based very heavily on C++. There are two required functions: `setup()` and `loop()`.
```cpp
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
```
`setup()` runs only one, at the beginning of program. This is where initialization code including setting `pinMode()` should happen. `loop()` runs indefinitely, think of this as a `while(true)` loop. This is where the majority of the code goes.

We are not limited to the functions `setup()` and `loop()`. We may add more just like we can to `main()` in a normal C++ program. We may also create our own classes if needed. 

Previously, [`pinMode()`](https://docs.arduino.cc/language-reference/en/functions/digital-io/pinMode/) was mentioned. `pinMode()` is one of the many built functions created specifically for interacting with the board. `pinMode()` defines if a given pin on the board should be used for input (`INPUT`) or output (`OUTPUT`). 

[`digitalWrite()`](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite/) is another very common builtin function, it writes (outputs) either a `HIGH` (on value) or `LOW` (off value) to a specified pin.

Finally, it is worth mentioning the [`delay()`](https://docs.arduino.cc/language-reference/en/functions/time/delay/) function which pauses program execution for a given number of milliseconds (There are 1000 milliseconds in a second.)

## Steps
1. Go to the Arduino simulator [website](https://wokwi.com/projects/new/arduino-uno).
2. Create a circuit for an LED.
3. Notice the provided `setup()` and `loop()` functions.
4. Within setup, set the functionality of the pin you used in step 2 using `pinMode()`. Is this pin being used for input or output?
5. Within `loop()` write data to the selected pin. Use `digitalWrite()` to send a `HIGH` signal to the specified pin to turn the LED on.
6. Delay the program using `delay()`
7. Use `digitalWrite()` to send a `LOW` signal to the specified pin to turn the LED off.
8. Delay the program again using `delay()`
9. Build the simulation with the play button.

## Working example
[`blink.cpp` simulated](https://wokwi.com/projects/414506195790206977)
![Hardware](/assets/img/blink.png)