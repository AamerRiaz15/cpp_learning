#include <iostream>
#include "Player.h"

int Player::get_health() {return health;}
int Player::get_xp() {return xp;}
std::string Player::get_name() {return name; }

void Player::set_health(int health_val) {health = health_val;}

Player::Player()
    : health{0}, xp{0}, name{"None"} {
    std::cout << "Default constructor called." << "\n";
}

Player::Player(int health_val)
    : Player(health_val, 0, "None") {
        std::cout << "One args constructor called." << "\n";
}

Player::Player(int health_val, int xp_val)
    : Player(health_val, xp_val, "None") {
        std::cout << "Two args constructor called." << "\n";
}

Player::Player(int health_val, int xp_val, std::string name_val)
    : health{health_val}, xp{xp_val}, name{name_val} {
        std::cout << "Three args constructor called." << "\n";
}

Player::Player(const Player &source)
    : health{source.health}, xp{source.xp}, name{source.name} {
            std::cout << "Copy constructor called for :" << name  << "\n";
}

Player::~Player() {
    std::cout << "Destructor called." << "\n";
}
