/*
Author: Eli Keli
Date: October 17
Description: C++ Classes and Objects (Excercice 3)
Registration Number: BSE-05-0238/2023
*/

/*
You need to create a simple class named BankAccount that simulates a bank account. The class should include the following:
- Primary member variables:
        - accountNumber (string)
        - balance (double)
- Public member functions:
        - A constructor that initializes the accountNumber and sets the balance to 0.
        - A method deposit(double amount) that adds the amount to the balance.
        - A method withdraw(double amount) that subtracts the amount from the balance, ensuring the balance never goes below 0.
        - A method getBalance() that returns the current balance.

write a small program that creates an object of the BankAccount class. Use this object to perform the following operations:
    1. Deposit $500 into the account.
    2. Withdraw $200 from the account.
    3. Attempt to withdraw $400 from the account (this should be prevented).
    4. Print the final balance.
*/

#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;
    
    public:
        // Constructor
        BankAccount(string accountNumber) {
            this->accountNumber = accountNumber;
            this->balance = 0;
        }

        // Member functions
        void deposit(double amount) {
            balance += amount;
        }

        void withdraw(double amount) {
            if (balance - amount >= 0) {
                balance -= amount;
            } else {
                cout << "Insufficient funds!" << endl;
            }
        }

        double getBalance() {
            return balance;
        }

};

int main() {
    BankAccount account("1234567890");

    account.deposit(500);
    account.withdraw(200);
    account.withdraw(400);

    cout << "Final Balance: $" << account.getBalance() << endl;

    return 0;
}