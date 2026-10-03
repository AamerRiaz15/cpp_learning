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
        std::cout << "Single arg constructor called.\n";
}

Mystring::Mystring(const Mystring &source)
    : data{new char[std::strlen(source.data) + 1]} {
        std::strcpy(data, source.data);
        std::cout << "Copy constructor called.\n";
}

Mystring::Mystring(Mystring &&source) noexcept
    : data{source.data} {
        source.data = nullptr;    
        std::cout << "Move constructor called.\n";
}

Mystring::~Mystring() {
    delete[] data;
    std::cout << "Destructor called.\n";
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete[] data;
    data = new char[std::strlen(rhs.data) + 1];
    std::strcpy(data, rhs.data);

    std::cout << "Copy assignmen operator called.\n";
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) noexcept {
    if (this == &rhs) {
        return *this;
    }
    delete[] data;
    data = rhs.data;
    rhs.data = nullptr;

    std::cout << "Move assignment operator called.\n";
    return *this;
}

Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(data) + 1];
    std::strcpy(buff, data);

    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(data) + std::strlen(rhs.data) + 1];
    std::strcpy(buff, data);
    std::strcat(buff, rhs.data);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(data, rhs.data) == 0);
}

void Mystring::display() const {
    std::cout << data << " : " << get_length() << "\n";
}

size_t Mystring::get_length() const {
    return std::strlen(data);
}

const char *Mystring::get_data() const {
    return data;
}
