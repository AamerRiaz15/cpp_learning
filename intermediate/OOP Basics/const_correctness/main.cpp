#include <iostream>
#include <string>

class Player {
private:
    std::string name;
public:
    std::string get_name() const;
    void set_name(std::string name_val);

    Player(std::string);
    ~Player();
};

std::string Player::get_name() const {
    return name;
}

void Player::set_name(std::string name_val) {
    name = name_val;
}

Player::Player(std::string name_val) 
    : name{name_val} {
}

Player::~Player() {
    std::cout << "Destructor called" << "\n";
}

void display(const Player &p1) {
    std::cout << p1.get_name();
}

int main() {
    const Player villain{"None"};
    Player hero{"Jeff"};

    std::cout << villain.get_name();
    //std::cout << villain.set_name("Derick"); // won't work
    
    display(hero);

    return 0;
}
