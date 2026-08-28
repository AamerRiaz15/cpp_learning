#include <iostream>
#include "Mystring.h"

int main() {
    Mystring empty;
    Mystring hello{"Hello"};
    Mystring copy{hello};

    empty.display();
    hello.display();
    copy.display();

    return 0;
}
