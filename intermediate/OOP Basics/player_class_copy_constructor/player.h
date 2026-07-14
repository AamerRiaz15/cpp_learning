#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    int health;
    int xp;
    std::string name;
public:
    int get_health();
    int get_xp();
    std::string get_name();

    void set_health(int health_val);
    
    Player();
    Player(int health_val);
    Player(int health_val, int xp_val);
    Player(int health_val, int xp_val, std::string name_val);
    Player(const Player &source);
    ~Player();
};

#endif
