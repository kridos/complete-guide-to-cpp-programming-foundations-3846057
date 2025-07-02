// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>


//enums are a list of named integer constants (starting from 0)
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    //Will use local scope when printint out asset_value if the identifiers are the same
    int sound = 8;
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
