# Instructions
**Objective:** Write a program which keeps track of multiple user's banking information.

## Background information
In this simplified version, each user of the bank account should have the following attributes:
- Account number
- Account owner name
- Checking account balance 
- Saving account balance

And the following *function*alities:
- Deposit money (into checking)
- Withdraw money (from checking)**
- Transfer money between checking and saving and vice versa**
- Get the total money in the account

** *Do not worry about invalid input (withdrawing too much)*

If this was a program for one user, this could be done in a sub-optimal way without classes. Consider how many independent variables and functions this program would need. What if there needed to be multiple users? Would your variables look like `checking_balance_1`, `checking_balance_2`, `checking_balance_3` etc? This can get messy and overly complicated fast. 

## Steps
1. Fill in the variables and functions needed for a single user's simplified bank account.
2. Fill in a few of the functions as well.
3. Imagine we wanted to add another bank account to the same program, how would you distinguish which variables belong to which user?
4. Notice how we have a large quantity of variables and functions which are describing one thing, one object, a bank account.