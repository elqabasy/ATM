//
// Created by Mahros on 12/25/2023.
//

#ifndef ATM_H
#define ATM_H
#include "Console.h"

class ATM : public Console {
    private:
        string _currentUser;
        long double max_withdraw = 10000;
    public:
        // Constructor
        explicit ATM(string appName);

        // Functionality
        bool createAccount();
        void executeCommand(const string& command);


        // Setters

        // Getters

        // Destructor
        ~ATM();
};
#endif // ATM_H
