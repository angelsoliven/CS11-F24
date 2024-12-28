# Instructions
**Objective:** Write a program that computes an estimate for the area under a curve (the definite integral of a function).

## Background information 
The integral of a function gives the net area under a curve within an interval. The following denotes the integral (area under the curve) of function $f(x)$ between $x = a$ and $x = b$.

$$\int^{b}_a f(x) dx $$

In MATH-5B you will learn how to exactly compute definite integrals of functions, but in this exercise we will look approximating areas with Simpson's Rule. Simpson's Rule is a method of approximating definite integrals by connecting known points with parabolic curves. You may look into the derivation of the rule, but for our purposes we will just refer to the following formula:

$$\int^{b}_a f(x) dx \approx \frac{\Delta x}{3}(f(x_0) + 4f(x_1) + 2(x_2) + 4f(x_3) + 2f(x_4) + ... + 2f(x_{n-2}) + 4 f(x_{n-1}) + f(x))$$

$$\Delta x = \frac{b - a}{n}$$

$$x_i = a + i\Delta x$$

The number of subdivisions, $n$, must be an even number. The more subdivisions, the better the approximation will be.
### Example
Compute the area under the function $\sqrt{\ln(x)}$ between $x = 1$ and $x = 4$ with 6 subdivisions

$$\Delta x = \frac{b - a}{n} = \frac{4 - 1}{6} = \frac{1}{2}$$

$$x_i = a + i\Delta x = \{1, 1.5, 2, 2.5, 3, 3.5, 4\}$$

$$\int^{4}_{1}\sqrt{\ln(x)}dx \approx \frac{1}{3 \cdot 2} \left(\sqrt{\ln{1}} + 4\sqrt{\ln{1.5}} + 2\sqrt{\ln{2}} + 4\sqrt{\ln{2.5}} + 2\sqrt{\ln{3}} + 4\sqrt{\ln{3.5}} + \sqrt{\ln{4}}\right)$$

$$\int^{4}_{1}\sqrt{\ln(x)}dx \approx  2.631976$$

<div align="center"><img src="https://i.imgur.com/hEx6XpE.png" alt="\sqrt{\ln{x}}" width="400"></div>


## Steps
1. Use Simpson's Rule to calculate the area below the function $\sin(\pi x) + 2$ between $x = 0$ and $x = 8$ with 1000 subdivisions 
2. Output the area to 5 decimal points
### Hints
- Use `M_PI` from `cmath` for $\pi$
- Note the pattern that coefficient of 4 always corresponds to an odd subscript. The coefficient of 2 always corresponds to an even subscript
- The first and last value do not have coefficients
<div align="center"><img src="https://i.imgur.com/zwQp0fN.png" alt="\sqrt{\ln{x}}" width="400"></div>


## Test Cases
```
The area below the function sin(πx)+2 between x = 0 and x = 8 with 1000 subdivisions is 16
```
