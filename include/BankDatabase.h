#ifndef BANK_DATABASE_H
#define BANK_DATABASE_H
#include <vector>
#include "Account.h"
class BankDatabase {
    public:
        BankDatabase();
        void addAccount(const Account& account);
        Account* getAccount(int accountNumber);
        bool authenticateUser(int accountNumber, int pin);
    private:
        std::vector<Account> accounts;  // Stores the list of accounts
};
#endif // BANK_DATABASE_H