#include <iostream>

class Player {
public:
    int *data;
    
    Player(int num1) {
        data = new int(num1);
    }
};

int main() {
    Player aamer(99);
    Player copilot = aamer;

    *copilot.data = 68;

    std::cout << aamer.data << "\n";
    std::cout << copilot.data << "\n";
}
