#include <iostream>

int* apply_all(int array_1[], size_t array1_size, int array_2[], size_t array2_size);
void print(int array[], size_t size);

int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array_1[]{1, 2, 3, 4, 5};
    int array_2[]{10, 20, 30};

    std::cout << "Array 1: ";
    print(array_1, array1_size);

    std::cout << "Array 2: ";
    print(array_2, array2_size);

    int* results = apply_all(array_1, array1_size, array_2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};

    std::cout << "Result: ";
    print(results, results_size);

    std::cout << std::endl;

    delete[] results;

    return 0;
}

int* apply_all(int array_1[], size_t array1_size, int array_2[], size_t array2_size) {
    //int size_new_array = array1_size * array2_size;
    int* result = new int[array1_size * array2_size];
    int* ptr_1 {nullptr};
    size_t index{0};

    for (size_t i = 0; i < array2_size; i++) {
        for (size_t j = 0; j < array1_size; j++) {
            result[index] = array_1[j] * array_2[i];
            index++;
        }
    }

    return result;
}

void print(int array[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " "; 
    }

    std::cout << std::endl;
}
