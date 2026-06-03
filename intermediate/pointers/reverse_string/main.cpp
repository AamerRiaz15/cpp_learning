#include <iostream>
#include <string>

// Reverse a std::string using raw pointers
std::string reverse_string(const std::string& str) {
    int size = str.size();

    // Create a new string with the same size, filled with '\0'
    std::string reversed(size, '\0');

    // Pointer to the first and last characters of the input string
    const char* left = str.c_str();
    const char* right = str.c_str() + size - 1;

    // Pointer to the first character of the output string
    char* dest = &reversed[0];

    // Copy characters from end → start
    while (right >= left) {
        *dest = *right;
        dest++;
        right--;
    }

    return reversed;
}

int main() {
    std::string input;

    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, input);

    std::string reversed = reverse_string(input);

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}

