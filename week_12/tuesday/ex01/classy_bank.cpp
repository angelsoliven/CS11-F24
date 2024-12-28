#include <iostream>
using namespace std;

/**
 * Deposit money into the checking account.
 * 
 * @param checking Reference to the checking account.
 * @param amount Amount to deposit.
 */
void deposit(double& checking, double amount) {
    checking += amount;
}

/**
 * Withdraw money into the checking account.
 * 
 * @param checking Reference to the checking account.
 * @param amount Amount to withdraw.
 */
void withdraw(double& checking, double amount) {
    checking -= amount;
}

/**
 * Move money from the checking account to savings account.
 * 
 * @param checking Reference to the checking account.
 * @param savings Reference to the savings account.
 * @param amount Amount to transfer.
 */
void transfer_checking_to_savings(double& checking, double& savings, double amount) {
    checking -= amount;
    savings += amount;
}

/**
 * Move money from the savings account to checking account.
 * 
 * @param checking Reference to the checking account.
 * @param savings Reference to the savings account.
 * @param amount Amount to transfer.
 */
void transfer_savings_to_checking(double& checking, double& savings, double amount) {
    checking += amount;
    savings -= amount;
}

/**
 * Get the total balance in the account.
 * 
 * @param checking Checking account.
 * @param savings Savings account.
 * @return Total money in the bank account.
 */
double get_total_balance(double checking, double savings) {
    return checking + savings;
}

int main() {
    int account_number;
    string name;
    double checking;
    double savings;

    return 0;
}