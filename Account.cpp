// Account.cpp

#include <iostream>
#include "Account.h"

Account::Account(int accountNumber, double initialBalance) {
    this->accountNumber = accountNumber;
    this->balance = initialBalance;
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;  // Successful withdrawal
    } else {
        std::cout << "Insufficient funds!" << std::endl;
        return false; // Failed withdrawal
    }
}

void Account::display() const {
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
}
