//
// Created by Mahros on 12/25/2023.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
    public:
        Account(int accountNumber, std::string accountHolder, double balance);
        bool withdraw(double amount);
        void deposit(double amount);
        double getBalance() const;
        std::string getAccountHolder() const;
        int getAccountNumber() const;
    private:
        int accountNumber;
        std::string accountHolder;
        double balance;
};

#endif // ACCOUNT_H