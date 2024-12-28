# Instructions
**Objective:** Write a program that determines which quadrant a point lies in. If it falls on an axis or the origin, print that instead.

## Background information
The Cartesian coordinate plane is a two-dimensional space defined by the intersection of two perpendicular lines. The vertical and horizontal axes are the $y$-axis and $x$-axis, respectively. The point where they intersect is called the origin. These axes divide the plane into four regions called quadrants. The quadrants are labeled $QI$ through $QIV$, starting in the top right and moving counterclockwise.

![The four quadrants](/assets/img/quadrants.png)

## Steps
1. Determine and print which quadrant/axis/origin the point lies in.

## Test Cases
### Case 1
```
x: 5
y: -6
The point (5, -6) lies within QIV.
```
### Case 2
```
x: -1
y: 6
The point (-1, 6) lies  within QII.
```
### Case 3
```
x: 9
y: -9
The point (9, -9) lies within QIV.
```
### Case 4
```
x: 10
y: 6
The point (10, 6) lies  within QI.
```
### Case 5
```
x: -4
y: -3
The point (-4, -3) lies  within QIII.
```
### Case 6
```
x: 0
y: 0
The point (0, 0) lies  on the origin.
```
### Case 7
```
x: 0
y: 9
The point (0, 9) lies  on the x-axis.
```
### Case 8
```
x: 16
y: 0
The point (16, 0) lies  on the y-axis.
```