#include <iostream>
#include <cstdlib>
using namespace std;


class BankAccount {
private:
    float balance;
    int accountNumber;
    
    void verifyBalance() {
        if (balance < 0) {
            cout << "ALERT: Negative balance detected!\n";
        }
    }
    
    void applyInterest() {
        float interest = balance * 0.05;
        balance = balance + interest;
        cout << "Interest applied. New balance: " << balance << "\n";
    }
    
    void logTransaction(string type, float amount) {
        cout << "[LOG] Transaction Type: " << type << ", Amount: " << amount << "\n";
    }

public:
    BankAccount() {
        balance = 0;
        accountNumber = 0;
    }
    
    void createAccount(int accNo, float initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
        cout << "Account created successfully!\n";
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
        cout << "Applying yearly interest...\n";
        applyInterest();
    }
    
    void displayBalance() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Current Balance: " << balance << "\n";
    }
};

int main() {
    cout << "========== QUESTION 3: PRIVATE FUNCTION CALLED FROM PUBLIC ==========\n\n";
    
    BankAccount *acc = (BankAccount *)malloc(sizeof(BankAccount));
    
    new (acc) BankAccount();
    
    acc->createAccount(12345, 5000);
    cout << "\n";
    
    cout << "--- Deposit 1000 ---\n";
    acc->deposit(1000);
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Deposit 500 ---\n";
    acc->deposit(500);
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Withdraw 200 ---\n";
    acc->withdraw(200);
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Apply Yearly Interest ---\n";
    acc->applyYearlyInterest();
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Withdraw 1000 ---\n";
    acc->withdraw(1000);
    acc->displayBalance();
    
    free(acc);
    return 0;
}