#include <iostream>
#include "Mystring.h"

int main() {
    Mystring a;
    Mystring b;
    Mystring c;

    a = b = c;

    a = Mystring{"Hertz"};

    return 0;
}
