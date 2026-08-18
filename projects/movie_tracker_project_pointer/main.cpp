#include <iostream>
#include "Movies.h"

int main() {
    Movies col1;

    col1.add_movie("Big", "PG-13", 1);
    col1.display();
    col1.increment_watched("Big");
    col1.display();

    if (col1.increment_watched("Gun")) {
        std::cout << "Watch incremented for Gun" << "\n";
    } else {
        std::cout << "Couldn't increment watch count - Movie does not exist." << "\n";
    }

    return 0;
}
