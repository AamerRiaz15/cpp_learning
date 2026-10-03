#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring {
private:
    char *data;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source) noexcept;
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;

    void display() const;
    size_t get_length() const;
    const char *get_data() const;
};

#endif
