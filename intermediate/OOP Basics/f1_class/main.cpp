#include <iostream>
#include <string>

class F1 {
private:
    double speed;
    std::string model;
public:
    void increase_speed(double speed_val) {speed += speed_val;}
    void decrease_speed(double speed_val) {speed -= speed_val;}
    void change_model(std::string model_val) {model = model_val;}
    
    F1(double speed_val = 0.0, std::string model_val = "None");
};

F1::F1(double speed_val, std::string model_val)
    : speed{speed_val}, model{model_val} {
        std::cout << "Two args constructor called." << "\n";
}

int main() {
    F1 w11{10.0};

    return 0;
}
