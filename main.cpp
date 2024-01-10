// main.cpp

#include <iostream>
#include "Account.h"
#include "Transaction.h"

int main() {
    // Create accounts
    Account account1(12345, 1000.0);
    Account account2(67890, 2000.0);

    // Create a transaction
    Transaction transaction(account1, account2);

    // Perform a transaction
    transaction.perform(500.0);

    // Display account details after the transaction
    account1.display();
    account2.display();

    return 0;
}
