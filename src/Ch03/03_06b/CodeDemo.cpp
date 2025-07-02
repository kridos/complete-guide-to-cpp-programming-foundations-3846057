// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

//All directives start with a '#' and occupy one line each (Ex: #include)
#include <iostream>
#include <cstdint>

//Defines symbol to be whatever is typed to the right of the symbol (find and replace) but usually used for constants (can also use const keyword to define regular variables as constants)
#define MAX_AMMO 500
#define DEBUG

int main(){

    //This type of formatting is portable across architectures

    //no 'u' so signed
    //then type (int)
    //then amount of bits (32)
    //then _t for type
    int32_t ammo = MAX_AMMO / 5;

    //'u' for unsigned
    //then type (int)
    //then amount of bits (32)
    //then _t for type
    uint8_t health_items = 5;

//Can use to run code if macro (DEBUG) is defined
#ifdef DEBUG
    std::cout << "[DEBUG] Starting game simulation" << std:: endl;
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;

    //Need to explicitly cast to int or else it would be interpretted as text character
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
