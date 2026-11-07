#include <iostream>
#include "Account.h"

void Account::deposit(double num) {
    std::cout << "Deposit called for account.\n";
}

void Account::withdraw(double num) {
    std::cout << "Withdraw called for account.\n";
}

Account::Account() 
    : balance{0.0}, name{"An Account"} {
}

Account::~Account() {
}
