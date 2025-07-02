// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    //-123.45 is a double since there isn't trailing f but it is implicitly casted

    //-123.45 is implicitly casted in all of these cases
    target_x = -123.45; //casted to float
    sprite_x = target_x; //truncated
    player_x = sprite_x; //interpreted as two's complement

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t but casted to int32_t): " << static_cast<int32_t>(player_x) << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
