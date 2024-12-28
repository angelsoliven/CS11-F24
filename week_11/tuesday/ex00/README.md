# Instructions
**Objective:** Write a program which takes in an undefined number of decimal inputs, and outputs them sorted.

## Background information
Remember a vector is resizable, elements may be added to the back using `.push_back()`.

## Steps
1. Take decimal inputs until EOF (or the user enters `ctrl-d`).
2. Add each element to a vector.
3. Output each element of the vector, each on its own line.
4. See projector for sorting. We will be using [`std::sort`](https://cplusplus.com/reference/algorithm/sort/)

## Test cases
### Case 1
```
8 27 16 2 1 2
1
2
2
8
16
27
```
### Case 2
```
0 8 -2 1 9
-2
0
1
8
9
```