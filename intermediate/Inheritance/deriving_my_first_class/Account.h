#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    double balance;
    std::string name;

    void deposit(double num);
    void withdraw(double num);

    Account();
    ~Account();
};

#endif
