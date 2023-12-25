#include <iostream>

int main() {
    // Declare an array
    int myArray[5] = {1, 2, 3, 4, 5};

    // Declare a pointer to an array of 5 integers
    int (*pointerToArray)[5] = &myArray;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout<<"TTTTT"<<pointerToArray<<"\n";
    std::cout<<"TTTTT"<<pointerToArray+1<<"\n";
    
    // Access elements using the pointer
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << (*pointerToArray)[i] << std::endl;
    }

    return 0;
}
