#include <iostream>
#include <vector>

class Move {
private:
    int *data;
public:
    Move(int d);
    Move(const Move &source);
    Move(Move && source) noexcept;
    ~Move();
};

Move::Move(int d) {
    data = new int;
    *data = d;
    std::cout << "Constructor for " << d << "\n";
}

Move::Move(const Move &source) 
    : Move{*source.data} {
        std::cout << "Copy constructor - deep copy for " << *data << "\n";
}

Move::Move(Move &&source) noexcept
    : data{source.data} {
        source.data = nullptr;
        std::cout << "Move constructor - moving resource: " << *data << "\n";
}

Move::~Move() {
    if (data != nullptr) {
        std::cout << "Destructor freeing data for: " << *data << "\n";
    } else {
        std::cout << "Destructor freeing data for nullptr" << "\n";
    }
    delete data;
}

int main() {
    std::vector<Move> vec;
    vec.push_back(Move{50});

    return 0;
}
