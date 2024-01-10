// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accountNumber, double initialBalance);

    void deposit(double amount);
    bool withdraw(double amount);
    void display() const;
};

#endif // ACCOUNT_H
