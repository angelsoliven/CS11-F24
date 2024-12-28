# Instructions
**Objective:** Write a program that validates user input

## Background information 
In the previous example, the user had one chance to enter their email and password correctly. This is not very user-friendly design, we would like to repeatedly ask the user to enter their username and password until they get it correct. This is a form of input validation. We will want to ask a user for input, and continue asking them for input until their input is what we want to accept (a valid email and password combination). We can use a `while` loop to do this.

## Steps
1. Copy your answer from `ex01` into `login_loop.cpp`
2. Modify your answer such that the program continues asking them for an email and password until both the username **and** password match the predetermined username and a password.

## Test Cases
```cpp
// Test values
const string EMAIL = "stlheure@cabrillo.edu";
const string PASSWORD = "password123";
```
### Case 1
```
Email: hello@gmail.com
Password: verysecurepassword
Incorrect email or password

Email: hello@gmail.com
Password: password123
Incorrect email or password

Email: stlheure@cabrillo.edu
Password: password123
Logged in successfully, welcome stlheure@cabrillo.edu
```
### Case 2
```
Email: stlheure@cabrillo.edu
Password: password123
Logged in successfully. Welcome stlheure@cabrillo.edu
```

## Challenge
Oftentimes, websites have a limit on the number of times you can enter your information in incorrectly. Have the program quit after 5 incorrect entries
### Case 1
```
Email: hello@gmail.me
Password: h@<k3rm@n123 
Incorrect email or password

Email: SI@gmail.net  
Password: Theres10typesOfPeoplewhoUnderStandBinary
Incorrect email or password

Email: steph@cabrillorobotics.org 
Password: p@$$w0R|7
Incorrect email or password

Email: steph@steph.steph
Password: imtired999
Incorrect email or password

Email: anotheremail@yahoo.gov 
Password: p@$$w0rD
You exceeded the max incorrect login amount. Try again later.
```