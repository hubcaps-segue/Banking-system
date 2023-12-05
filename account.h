// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNumber, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    void display() const;
};

#endif // ACCOUNT_H
