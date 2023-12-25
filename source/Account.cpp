//
// Created by Mahros on 12/25/2023.
//

// Account.cpp

#include "..\include\Account.h"

Account::Account(int accountNumber, std::string accountHolder, double balance)
        : accountNumber(accountNumber), accountHolder(accountHolder), balance(balance) {
    // Constructor implementation
}

bool Account::withdraw(double amount) {
    // Method implementation
}

void Account::deposit(double amount) {
    // Method implementation
}

double Account::getBalance() const {
    // Method implementation
}

std::string Account::getAccountHolder() const {
    // Method implementation
}

int Account::getAccountNumber() const {
    // Method implementation
}