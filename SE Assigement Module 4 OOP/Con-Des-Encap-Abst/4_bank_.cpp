/*4. Write a C++ program to implement a class called Bank 
Account that has private member variables for account number 
and balance. Include member functions to deposit and 
withdraw money from the account.*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit() {
        float amount;
        cout << "\n\n\t Enter the amount of deposit: ";
        cin >> amount;
        
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw() {
        float amount;
        cout << "\n\n\t Enter the amount of withdrawal: ";
        cin >> amount;
        
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount A(12345, 1000.0);

    A.deposit();
    A.withdraw();

    cout << "Current balance: $" << A.getBalance() << endl;

    return 0;
}

