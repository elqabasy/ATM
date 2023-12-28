//
// Created by Mahros on 12/25/2023.
//

// Account.cpp

#include <utility>

#include "..\include\Account.h"
// Static variable
long long int Account::_counter = 0;


// Constructor
Account::Account(long long int serial, string holder, long double balance){
    // Constructor implementation
    _counter++;
    this->serial(serial);
    this->holder(std::move(holder));
    this->balance(balance);
}

// Functionality
bool Account::remove() {
    // Method implementation
    _counter--;
    delete this;
    return true;
}
bool Account::reset() {
    // Method implementation
    _balance = 0;
    return true;
}
bool Account::withdraw(long double amount) {
    // Method implementation
    if(amount > _balance) {
        return false;
    } else {
        _balance -= amount;
        return true;
    }
}
bool Account::deposit(long double amount) {
    // Method implementation
    if(amount > 0) {
        _balance += amount;
    }else{
        return false;
    }
}

// Setters
bool Account::holder(const string name) {
    // Method implementation
    if(!name.empty()) {
        _holderName = name;
        return true;
    }else{
        return false;
    }
}
bool Account::balance(const long double balance) {
    // Method implementation
    if(balance > 0) {
        _balance = balance;
        return true;
    }else{
        return false;
    }
}
bool Account::serial(const long long int serial) {
    // Method implementation
    if(serial > 0) {
        _serialNumber = serial;
        return true;
    }else{
        return false;
    }
}

// Getters
string Account::holder() const {
    // Method implementation
    return _holderName;
}
long double Account::balance() const {
    // Method implementation
    return _balance;
}
long long int Account::serial() const {
    // Method implementation
    return _serialNumber;
}

// Destructor
Account::~Account() {
    // Destructor implementation
}