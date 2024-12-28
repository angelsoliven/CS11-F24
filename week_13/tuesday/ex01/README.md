# Instructions
**Objective:** Use C++ to control a RGB light.

## Background information
### RGB
RGB (Red, Green, Blue) is an additive color model used to represent colors on digital screens. By combining varying intensities of red, green, and blue light, a wide array of colors can be created. RGB values are typically represented as a tuple of three numbers (red, green, blue), with each value ranging from 0 to 255 to indicate the intensity of each color.

<img width="300" alt="RGB Venn Diagram" src="https://raw.githubusercontent.com/steph1111/CS11-F24/refs/heads/main/assets/img/venn_diagram_rgb.svg.png">


To explore RGB values, try searching for a *color picker* on google. Experiment with moving the picker to see how the RGB values change. What is pure red? Pure green? What happens when you mix some red and blue?

![Color Picker](/assets/img/color_picker.png)

## Steps
1. Go to the Arduino simulator [website](https://wokwi.com/projects/new/arduino-uno).
2. Wire the circuit for a RGB light (be sure to choose common cathode).
3. Create global variables for the `RED`, `GREEN`, and `BLUE` pins.
4. Set the `pinMode()` for each pin.
5. Create a function which takes in three parameters, `red`, `green` and `blue` which are integer values assumed to be between `0` and `255`. Use `analogWrite()` to write each value to the corresponding pin.
6. Use the google color picker from above to set the light to multiple RGB values. Maybe make it change colors.

## Working example
[`rgb.cpp` simulated](https://wokwi.com/projects/415011504171590657)
![Hardware](/assets/img/rgb.png)