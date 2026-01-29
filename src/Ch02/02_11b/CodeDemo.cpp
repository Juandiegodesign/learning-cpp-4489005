// Learning C++ 
// Exercise 02_11 Modded 
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << std::endl; 
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;

    std::cout << "Fahrenheit     : " << weight << std::endl;
    std::cout << "Celsius        : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int) weight) * 10000) << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
