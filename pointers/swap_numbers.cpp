#include <iostream>

// Swaps the values stored at 2 memory addresses
void swap_numbers(int* ptr1, int* ptr2);

int main() {
    int num1{5};
    int num2{10};
    
    int* ptr1{&num1};
    int* ptr2{&num2};
    
    swap_numbers(ptr1, ptr2);
    
    return 0;
}

void swap_numbers(int* ptr1, int* ptr2) {
    std::cout << "What pointer 1 points to before: " << *ptr1 << "\n"
              << "What pointer 2 points to before: " << *ptr2 << "\n";

    // Swap without using a temporary variable
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    
    std::cout << "What pointer 1 points to after: " << *ptr1 << "\n"
              << "What pointer 2 points to after: " << *ptr2 << std::endl;
}
