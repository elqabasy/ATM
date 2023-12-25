//
// Created by Mahros on 12/25/2023.
//

#ifndef ATM_H
#define ATM_H
#include "BankDatabase.h"
class ATM {
    public:
        explicit ATM(BankDatabase& bankDatabase);
        void run();
    private:
        BankDatabase& bankDatabase;
};
#endif // ATM_H
