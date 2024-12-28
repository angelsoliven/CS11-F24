# Instructions
**Objective:** Write a program that computes an estimate for the area under a curve (the definite integral of a function).

## Background information 
The integral of a function gives the net area under a curve within an interval. The following denotes the integral (area under the curve) of function $f(x)$ between $x = a$ and $x = b$.

$$\int^{b}_a f(x) dx$$

In MATH-5B you will learn how to exactly compute definite integrals of functions, today we will look at a simplified version in which we approximate the area smaller and smaller rectangles. This is called a Reiman sum and is defined as the following.

$$\sum^{n}_{i = 1}f(x_i)\Delta x$$

Where $f(x)$ is some function continuous $\forall x \in [a, b]$ (for all $x$ between $a$ and $b$).

$$\Delta x = \frac{b - a}{n}$$

$$x_i = a + i\Delta x$$

The more subdivisions ($n$), the better the approximation will be.
### Example
See white board. 

## Steps
1. Calculate the area under the function $f(x) = x^2$ between $a = 0$ and $b = 4$ with $n$.


## Test Cases
### Case 1 (n = 4)
```
The area below the polynomial x^2 between x = 0 and x = 4 is 14
```
### Case 2 (n = 100)
```
The area below the polynomial x^2 between x = 0 and x = 4 is 21.0144
```
### Case 3 (n = 100,000)
```
The area below the polynomial x^2 between x = 0 and x = 4 is 21.3337
```
Note the actual value is:
$$\frac{64}{3} \approx 21.333333...$$
