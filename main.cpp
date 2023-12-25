#include <iostream>
#include "include/ATM.h"

using namespace std;
int main() {
    BankDatabase bankDatabase;
    // Here, you would load customer data into the database
    // For demonstration, we will create and add a new account manually
    Account newAccount(123456, "John Doe", 1000.0);
    bankDatabase.addAccount(newAccount);

    ATM atm(bankDatabase);
    atm.run();

    return 0;
}
