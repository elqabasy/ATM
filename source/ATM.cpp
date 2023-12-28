//
// Created by Mahros on 12/25/2023.
//

#include "../include/ATM.h"
#include "../include/Constants.h"
#include "../include/Account.h"

// Constructor
ATM::ATM(string appName) : Console(std::move(appName)) {

}

// Functionality
void ATM::executeCommand(const string &command) {
    if(command == "help"){
        help();
    }else if (command == "new"){
        createAccount();
    }else{
        cout << "Command not found - Use command help for more information." << CONSOLE_NEW_LINE;
    }
}

bool ATM::createAccount() {
    // Method implementation
    long long int serial = 0;
    long double balance = 0;
    string holder;
    setBranch("\\Create Account::Serial");
    cin >> serial;
    setBranch("\\Create Account::Holder");
    cin >> holder;
    setBranch("\\Create Account::Balance");
    cin >> balance;

    return true;
}
// Setters


// Getters

// Destructor
ATM::~ATM() = default;