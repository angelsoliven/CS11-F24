#include <iostream>
using namespace std;

class Bank {
    public:
    Bank (string new_name);
    /**
     * Deposit money into the checking account.
     * 
     * @param amount Amount to deposit.
     */
    void deposit(double amount);

    /**
     * Withdraw money into the checking account.
     * 
     * @param amount Amount to withdraw.
     */
    void withdraw(double amount);

    /**
     * Move money from the checking account to savings account.
     * 
     * @param amount Amount to transfer.
     */
    void transfer_checking_to_savings(double amount);

    /**
     * Move money from the savings account to checking account.
     * 
     * @param amount Amount to transfer.
     */
    void transfer_savings_to_checking(double amount);

    /**
     * Get the total balance in the account.
     * 
     * @return Total money in the bank account.
     */
    double get_total_balance() const;

    private:
    int account_number;
    string name;
    double checking;
    double savings;
};

Bank::Bank(string new_name) {
    int account_number = rand();
    name = new_name;
    checking = 0;
    savings = 0;
} 

void Bank::deposit(double amount) {
    checking += amount;
}

void Bank::withdraw(double amount) {
    checking -= amount;
}

void Bank::transfer_checking_to_savings(double amount) {
    checking -= amount;
    savings += amount;
}

void Bank::transfer_savings_to_checking(double amount) {
    checking += amount;
    savings -= amount;
}

double Bank::get_total_balance() const {
    return checking + savings;
}

int main() {
    Bank my_bank("steph");

    return 0;
}