#include <iostream>

class Base {
private:
    int value;
public:
    Base() 
        :value{0} {
            std::cout << "Base constructor called.\n";
    }
    Base(int x) 
        :value{x} {
        std::cout << "Base overloaded constructor called,\n";
    }
    ~Base() {
        std::cout << "Base destructor called.\n";
    }
};

class Derived : public Base{
private:
    int doubled_value;
public:
    Derived()
        :Base{}, doubled_value{0}  {
            std::cout << "Derived constructor called.\n";
    }
    Derived(int x) // Could I also put x in here and then multiply by a doubled value in the initialisation list (in the derived part).
        :Base{x}, doubled_value{x*2} {
            std::cout << "Derived overloaded constructor called.\n";
    }
    ~Derived() {
        std::cout << "Derived destructor called.\n";
    }
};

int main() {
    //Derived b;
    Derived c{100};
    return 0;
}
