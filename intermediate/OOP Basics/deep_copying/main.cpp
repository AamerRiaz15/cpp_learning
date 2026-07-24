#include <iostream>

class Deep {
private:
    int *data;
public:
    int *get_data() {return data;}
    void set_data(int amount) {*data = amount;}

    Deep(int v);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int v) {
    data = new int;
    *data = v;
}

Deep::Deep(const Deep &source) {
    data = new int;
    *data = *source.data;
}

Deep::~Deep() {
    delete data;
}

int main() {
    Deep obj1(100);
    Deep obj2(obj1);
    
    std::cout << "---Values for pointers---\n";
    std::cout << *obj1.get_data() << "\n";
    std::cout << *obj2.get_data() << "\n";

    std::cout << "---Addresses for pointers---\n";
    std::cout << obj1.get_data() << "\n";
    std::cout << obj2.get_data() << "\n";
}
