# Instructions
**Objective:** Write a program which confirms two user entries.

## Background information 
When you log into a website, it asks you to enter your a user name and password as the graphic shows below. While this is much more complicated in real programs (hashing is used for security purposes), it is a form a user input validation. We will code a simple version of this.
![Login graphic](/assets/img/login.png)


## Steps
1. Predetermine a username and a password using `const` (Replace the `FIXME` text)
2. Ask the user to enter their username and password
3. Determine if the user has entered the correct login info, if so, welcome them to the site. Otherwise, inform them that their email or password is incorrect.

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
```

### Case 2
```
Email: stlheure@cabrillo.edu
Password: password123
Logged in successfully. Welcome stlheure@cabrillo.edu
```
