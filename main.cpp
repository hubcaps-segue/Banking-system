// main.cpp
#include "account.h"

int main() {
    // Create two accounts
    Account account1(1001, 5000.0);
    Account account2(1002, 10000.0);

    // Perform transactions
    account1.deposit(1000.0);
    account1.withdraw(200.0);

    account2.deposit(1500.0);
    account2.withdraw(500.0);

    // Display account information
    account1.display();
    account2.display();

    return 0;
}
