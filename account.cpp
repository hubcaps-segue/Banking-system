// account.cpp
#include "account.h"
#include <iostream>

Account::Account(int accNumber, double initialBalance)
    : accountNumber(accNumber), balance(initialBalance) {}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited $" << amount << " into account #" << accountNumber << std::endl;
    } else {
        std::cout << "Invalid deposit amount" << std::endl;
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn $" << amount << " from account #" << accountNumber << std::endl;
    } else {
        std::cout << "Invalid withdrawal amount or insufficient funds" << std::endl;
    }
}

double Account::getBalance() const {
    return balance;
}

void Account::display() const {
    std::cout << "Account #" << accountNumber << " Balance: $" << balance << std::endl;
}
