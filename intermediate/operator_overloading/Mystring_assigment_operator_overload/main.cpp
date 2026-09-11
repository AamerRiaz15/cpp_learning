#include <iostream>
#include <cstring>

class Mystring {
private:
    char *data;
public: 
    Mystring(const char *value = "")
        : data{ new char[std::strlen(value) + 1] } {
        std::cout << "Constructor called.\n";
        std::strcpy(data, value);
    }

    ~Mystring() {
        std::cout << "Destructor called.\n";
        delete[] data;
    }

    Mystring& operator=(const Mystring &rhs) {
        std::cout << "Overloaded assignment operator called.\n";
        
        if (this == &rhs)
            return *this;

        delete[] data;

        data = new char[std::strlen(rhs.data) + 1];
        std::strcpy(data, rhs.data);

        return *this;
    }
};

int main() {
    Mystring obj{"hello"};
    return 0;
}
