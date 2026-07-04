#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    double health;
    int xp;
    std::string name;
public:
    double get_health();
    int get_xp();
    std::string get_name();

    void heal(double heal_val);
    void take_damage(double damage_val);

    Player(double health_val = 0, int xp_val = 0, std::string name_val = "None");
};

#endif
