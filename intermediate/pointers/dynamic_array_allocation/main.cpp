#include <iostream>

int get_allocation_size();
int read_input();
void fill_array(int* arr, int size);
void print_array(int* arr, int size);

int main() {
    int size = get_allocation_size();
    
    int* arr = new int[size]; // Allocated array on heap
    fill_array(arr, size);
    print_array(arr, size);

    delete[] arr;

    return 0;
}

int get_allocation_size() {
    std::cout << "Enter numbers for allocation: ";
    int user_input = read_input();

    return user_input;
}

int read_input() {
    int num {};
    std::cin >> num;
    
    return num; 
}

void fill_array(int* arr, int size) {
    for (size_t i = 0; i < size; ++i) {
        *(arr + i) = (i + 1) * 10;
    }
}

void print_array(int* arr, int size) {
    std::cout << "Array contents: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " "; 
    }
    std::cout << "\n";
} 
