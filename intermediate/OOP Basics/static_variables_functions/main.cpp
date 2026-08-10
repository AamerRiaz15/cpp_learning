#include <iostream>
#include "Player.h"

void display_active_players();

int main() {
    display_active_players();
    Player hero{"Hero"};
    display_active_players();

    return 0;
}

void display_active_players() {
    std::cout << Player::get_num_players() << "\n";
}
