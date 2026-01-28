// Learning C++ 
// Exercise 02_06 Modded 
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG
int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // Shorthand for "large = large + small;"
    std::cout << "the large interger is " << large << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}