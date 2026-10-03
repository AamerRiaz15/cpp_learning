#include <iostream>
#include "Mystring.h"

int main() {
    Mystring a{"Hello"};
    a = -a;
    
    Mystring b{"bye"};
    Mystring c = a + b;

    std::cout << "Are they equal? " << (a == c);

    return 0;
}
