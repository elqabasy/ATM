//
// Created by Mahros on 12/25/2023.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
        string _holderName;
        long double _balance = 0;
        long long int _serialNumber{};
        static long long int _counter;
    public:
        // Constructor
        Account(long long int, string, long double);

        // functionality
        bool reset();
        bool remove();
        bool withdraw(long double); // get money
        bool deposit(long double); // add money

        // Setters
        bool holder(const string);
        bool balance(const long double);
        bool serial(const long long int);

        // Getters
        string holder() const;
        long double balance() const;
        long long int serial() const;

        // Destructor
        ~Account();
};
#endif // ACCOUNT_H