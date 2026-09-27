#include <iostream>
#include <cctype>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring()
    : data{nullptr} {
        data = new char[1];
        *data = '\0';
        std::cout << "No args constructor called.\n";
}

Mystring::Mystring(const char *s)
    : data{nullptr} {        
        if (s == nullptr) {
            data = new char[1];
            *data = '\0';
        } else {
            data = new char[std::strlen(s) + 1];
            std::strcpy(data, s);
        }

        std::cout << "Overloaded constructor called.\n";
}

Mystring::Mystring(const Mystring &source) 
    : data{new char[std::strlen(source.data) + 1]} {
        std::strcpy(data, source.data);
        std::cout << "Copy constructor called.\n";
}

Mystring::Mystring(Mystring &&source)
    : data{source.data} {
        source.data = nullptr;
        std::cout << "Move constructor called.\n";
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete[] this->data;
    data = new char[std::strlen(rhs.data) + 1];
    std::strcpy(data, rhs.data);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete[] this->data;
    data = rhs.data;
    rhs.data = nullptr;
    std::cout << "Move assignment called.\n";
    return *this;
}

Mystring::~Mystring() {
    delete[] data;
    std::cout << "Destructor called.\n";
}

void Mystring::display() const {
    std::cout << *data << "\n";
}

int Mystring::get_length() const {
    return std::strlen(data);
}

const char *Mystring::get_str() const {
    return data;
}
