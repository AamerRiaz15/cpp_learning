#include "Player.h"
#include <string>

int Player::num_players{0};

int Player::get_health() {
    return health;
}

std::string Player::get_name() {
    return name;
}

int Player::get_xp() {
    return xp;
}

Player::Player(int health_val, std::string name_val, int xp_val) 
    : health{health_val}, name{name_val}, xp{xp_val} {
        num_players++;
}

Player::Player(const Player &source) 
    : health{source.health}, name{source.name}, xp{source.xp} {
}

Player::~Player() {
    num_players--;
}

int Player::get_num_players() {
    return num_players;
}
