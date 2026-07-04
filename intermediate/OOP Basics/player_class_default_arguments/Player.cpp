#include "Player.h"
#include <string>

double Player::get_health() {return health;}
int Player::get_xp() {return xp;}
std::string Player::get_name() {return name;}

void Player::heal(double heal_val) {health += heal_val;}
void Player::take_damage(double damage_val) {health -= damage_val;}

Player::Player(double health_val, int xp_val, std::string name_val) 
    : health{health_val}, xp{xp_val}, name{name_val} {
} 
