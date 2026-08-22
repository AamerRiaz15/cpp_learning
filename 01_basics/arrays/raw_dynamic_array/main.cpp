#include <iostream>

int main() {
    int size = 10;
    int* array1 = new int[size];

    for (size_t i = 0; i < size; i++) {
        array1[i] = i * 2;
    }

    for (size_t i = 0; i < size; i++) {
        std::cout << array1[i] << " ";
    }

    delete[] array1;

    return 0;
}
