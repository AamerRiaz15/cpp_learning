#include <iostream>
#include <cstring>
#include "Mystring.h"

void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
     : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// Copy assignment operator (not in video yet, but required)
Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs)
        return *this;

    delete[] str;

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    return *this;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}
