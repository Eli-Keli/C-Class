/*
Author: Eli Keli
Date: October 31
Description: Banking System Excercise
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

class BankAccount {
    protected:
        string accountHolder;
        float balance;

    public:

        void setAccountHolder(string name) {
            accountHolder = name;
        }

        void getAccountHolder() {
            cout << "Account Holder: " << accountHolder << endl;
        }

        void getBalance() {
            cout << "Balance: " << balance << endl;
        }
};

class SavingsAccount : public BankAccount {
    private:
        float interestRate;

    public:
        SavingsAccount(string name, float balance, float interestRate) {
            this->accountHolder = name;
            this->balance = balance;
            this->interestRate = interestRate;
        }

        void calculateInterest() {
            cout << "Interest Rate: " << balance * interestRate << endl;
            balance += balance * interestRate;
            cout << "Total Balance: " << balance << endl << endl;
        }
};

class CheckingAccount : public BankAccount {
    private:
        float transactionFee;
    
    public:
        CheckingAccount(string name, float balance, float transactionFee) {
            this->accountHolder = name;
            this->balance = balance;
            this->transactionFee = transactionFee;
        }

        void deductFee() {
            cout << "Transaction Fee: " << balance * transactionFee << endl;
            balance -= balance * transactionFee;
            cout << "Total Balance: " << balance << endl;
        }
};

int main() {
    SavingsAccount account1("Alice", 1000, 0.03);
    CheckingAccount account2("Bob", 500, 2.5);

    account1.getAccountHolder();
    account1.getBalance();
    account1.calculateInterest();

    account2.getAccountHolder();
    account2.getBalance();
    account2.deductFee();

}