#include <iostream>

void double_number(int& num);
int read_int();

int main() {
    std::cout << "Welcome to the number doubler!";
    std::cout << "\n==============================";

    int num {};
    std::cout << "\nEnter a number to double: ";
    num = read_int();

    std::cout << "Number before function: ";
    std::cout << num;

    double_number(num);

    std::cout << "Number after double: ";
    std::cout << num;

    return 0;
}

void double_number(int& num) {
    num *= 2;    
}

int read_int() {
    int num{};
    std::cin >> num;

    return num;
}
