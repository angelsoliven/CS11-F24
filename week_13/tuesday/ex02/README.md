# Instructions
**Objective:** Use C++ to control a servo motor.

## Background information
### Servo motors 
A servo motor is a type of motor which contains gears which may be precisely controlled. Thee are two types of servo motors, continuous and positional. A continuous servo can rotate $360^{\circ}$ (has no set end position). A positional servo has rotation limited to specified angles, usually between $0^{\circ}$ and $180^{\circ}$. A positional servo can precisely move to an angle within its range. 

The circuit for a simple servo consists of one pin connected to ground, one to 5 volts, and one to a PWM pin. NOTE: Generally we would also use a capacitor. A capacitor is a component which 
stores electrical charge. In this case, it would help stabilize the power supply, minimize voltage drops, and reduce electrical noise.

### Servo library
Similarly to C++, Arduino contains various libraries for additional functionality. The library for servo support is [`<Servo.h>`](https://docs.arduino.cc/libraries/servo/) (additional information found on the GitHub for [Servo](https://github.com/arduino-libraries/Servo)). We may use it in our program with a `#include`
```cpp
#include <Servo.h>
```
To use a servo, we need to create an object of type servo. This will be a global variable.
```cpp
Servo servo;
```
Within `setup()` use the `attach()` method to attach the servo object to a pin. This tells the Servo object what pin to use. Note this must be a PWM pin. 
```cpp
servo.attach(10);
```
To move the servo to a position, use the `write()` method. `write()` takes in an angle between `0` and `180`
```cpp
servo.write(120);
```


## Steps
1. Go to the Arduino simulator [website](https://wokwi.com/projects/new/arduino-uno).
2. Wire the circuit for a servo.
3. Include the library `<Servo.h>`.
4. Create a `Servo` object.
5. Attach the servo to your pin.
6. Within the `loop` function:
    - First, move the motor starting at `0` degrees and continue stepping by 1 degree to `180`. Delay `15`ms between each step.
    - Next, move the motor the other direction, from `180` to `0` degrees, again stepping by one degree. Again, delay `15`ms between each step.
    
    This should result in the motor sweeping back and fourth.

## Working example
[`servo.cpp` simulated](https://wokwi.com/projects/415018309795785729)
![Hardware](/assets/img/servo.png)