#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

int main() {
    std::cout << "---Account class || Parent---\n";

    Account acc{};
    acc.deposit(100);
    acc.withdraw(50);
    std::cout << acc.name << "\n";

    std::cout << "---SavingsAccount class || Child---\n";
    SavingsAccount sav{};
    sav.deposit(100);
    sav.withdraw(50);
    std::cout << sav.name << "\n";

    return 0;
}
