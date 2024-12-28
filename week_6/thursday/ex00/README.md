# Instructions
**Objective:** Use a while loop to find the max and sum of an undefined amount of user input. 

## Background information 
A sentinel value is a known, predefined value which is utilized in algorithms to denote a special case. In the following program, `0` will be our sentinel value.

## Instructions
*Modified from CS24 Program #1*
1. Repeatedly take input for a number. 
2. The program should stop when it gets an input that is `0` (so that means that the `0` itself is not an input value).
3. If no values were entered (i.e. the first input is a zero) then output "no input."
4. Output out the sum and the maximum value of all of the values that were input.


## Test cases
### Case 1
```sh
12
6
5
2
98
0
Max: 98
Sum: 123
```

### Case 2 (`case2.txt`)
```sh
❯ ./a.out < case2.txt
Max: 1820
Sum: 1223
```

### Case 3 (`case3.txt`)
```sh
❯ ./a.out < case3.txt
Max: -1
Sum: -75
```
### Case 4 (`case4.txt`)
```sh
❯ ./a.out < case4.txt
Max: 18201
Sum: 34641
```

### Case 5 (`case5.txt`)
```sh
❯ ./a.out < case5.txt
No input
```