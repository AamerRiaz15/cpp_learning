#include <iostream>
#include <cstring>

class MyString {
private:
    char *data;
public:
    MyString()
    : data{nullptr} {
        data = new char[1];
        *data = '\0';
    }

    MyString(const char *s)
    : data{nullptr} {
        if (s == nullptr) {
            data = new char[1];
            *data = '\0';
        } else {
            data = new char[std::strlen(s) + 1];
            std::strcpy(data, s);
        }
    }

    MyString(const MyString &source) 
        : data{new char[std::strlen(source.data) + 1]} {
            std::strcpy(data, source.data);
    }

    MyString& operator=(const MyString &rhs) {
        if (this == &rhs) {
            return *this;
        }

        delete[] data;
        data = new char[std::strlen(rhs.data) + 1];
        std::strcpy(this->data, rhs.data);

        return *this;
    }

    ~MyString() {
        delete[] data;
    }
};
