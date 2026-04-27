#include <iostream>
#include <string>
using namespace std;


class BankAccount {
private:
    float balance;
    int accountNumber;
    
    void verifyBalance() {
        if (balance < 0) {
            cout << "Negative balance\n";
        }
    }
    
    void applyInterest() {
        float interest = balance * 0.05;
        balance = balance + interest;
    }
    
    void logTransaction(string type, float amount) {
        cout << type << ": " << amount << "\n";
    }

public:
    BankAccount() {
        balance = 0;
        accountNumber = 0;
    }
    
    void createAccount(int accNo, float initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Initial Balance: " << balance << "\n";
    }
    
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
            logTransaction("DEPOSIT", amount);
            verifyBalance();
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }
    
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
            logTransaction("WITHDRAWAL", amount);
            verifyBalance();
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!\n";
        }
    }
    
    void applyYearlyInterest() {
        applyInterest();
    }
    
    void displayBalance() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Current Balance: " << balance << "\n";
    }
};

int main() {
    BankAccount *acc = new BankAccount();
    
    acc->createAccount(12345, 5000);
    cout << "\n";
    
    acc->deposit(1000);
    acc->displayBalance();
    cout << "\n";
    
    acc->deposit(500);
    acc->displayBalance();
    cout << "\n";
    
    acc->withdraw(200);
    acc->displayBalance();
    cout << "\n";
    
    acc->applyYearlyInterest();
    acc->displayBalance();
    cout << "\n";
    
    acc->withdraw(1000);
    acc->displayBalance();
    
    delete acc;
    return 0;
}
