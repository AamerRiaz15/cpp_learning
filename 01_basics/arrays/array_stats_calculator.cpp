#include <iostream>

int main() {
    int array_1[5];
    
    size_t array_size{};
    array_size = sizeof(array_1) / sizeof(array_1[0]);
    
    std::cout << "Enter 5 numbers separated by spaces: ";

    for (size_t i = 0; i < array_size; ++i) {
        std::cin >> array_1[i];
    }
    
    double sum{0.0};
    
    for (size_t i = 0; i < array_size; ++i) {
        sum += array_1[i];
    }
    
    double average = sum / array_size;
    
    int smallest_number = array_1[0];
    
    for (size_t i = 1; i < array_size; ++i) {
        if (array_1[i] < smallest_number)
            smallest_number = array_1[i];
    }
    
    int largest_number = array_1[0];
    
    for (size_t i = 1; i < array_size; ++i) {
        if (array_1[i] > largest_number)
            largest_number = array_1[i];
    }
    
    std::cout << "The sum is: " << sum << "\n"
              << "The average is: " << average << "\n"
              << "The smallest number is: " << smallest_number << "\n"
              << "The largest number is: " << largest_number << std::endl;
    
    return 0;
}
