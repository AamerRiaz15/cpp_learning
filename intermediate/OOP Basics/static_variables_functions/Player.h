#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    static int num_players;

    std::string name;
    int health;
    int xp;
public:
    int get_health();
    std::string get_name();
    int get_xp();

    Player(std::string name_val = "None", int health = 100, int xp_val = 0);
    Player(const Player &source);
    ~Player();

    static int get_num_players();
};

#endif
