#include <iostream>

int calculate(int a, int b);
double calculate(double a, double b);
int calculate(int a, int b, int c);

int main() {
    std::cout << "###### Test for addition ######\n";
    int b{1};
    int c{2};
    std::cout << calculate(b, c) << "\n";

    std::cout << "###### Test for multiplication ######\n";
    double num1{10.0};
    double num2{20.0};
    std::cout << calculate(num1, num2) << "\n";

    std::cout << "###### Test for average ######\n";
    int testNum1{5};
    int testNum2{10};
    int testNum3{15};
    std::cout << calculate(testNum1, testNum2, testNum3) << "\n";

    return 0;
}

int calculate(int a, int b) {
    return a + b;
}

double calculate(double a, double b) {
    return a * b;
}

int calculate(int a, int b, int c) {
    int average{0};
    average = (a + b + c) / 3;
    return average;
}
