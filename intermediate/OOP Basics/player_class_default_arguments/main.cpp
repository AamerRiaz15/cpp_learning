#include <iostream>
#include "Player.h"

int main() {
    Player p1(100, 50, "Aamer");
    std::cout << p1.get_name() << " has " << p1.get_health() << " HP\n";

    p1.take_damage(20);
    std::cout << "After damage: " << p1.get_health() << " HP\n";

    p1.heal(10);
    std::cout << "After healing: " << p1.get_health() << " HP\n";

    return 0;
}
