// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"

class Transaction {
private:
    Account sender;
    Account receiver;

public:
    Transaction(const Account& sender, const Account& receiver);

    void perform(double amount);
};

#endif // TRANSACTION_H
