// Transaction.cpp

#include "Transaction.h"

Transaction::Transaction(const Account& sender, const Account& receiver) : sender(sender), receiver(receiver) {}

void Transaction::perform(double amount) {
    // Perform a basic funds transfer transaction
    sender.withdraw(amount);
    receiver.deposit(amount);
}
