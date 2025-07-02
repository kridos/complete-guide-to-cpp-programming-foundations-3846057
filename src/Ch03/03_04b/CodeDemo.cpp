// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment (updates value after it is used in expression)
    std::cout << "Score using postfix increment: " << player_score++ << std::endl;

    // Prefix increment (updates value before it is used in expression
    std::cout << "Score using prefix increment: " << ++player_score << std::endl;

    // Postfix decrement (updates value after it is used in expression)
    std::cout << "Lives using postfix decrement: " << player_lives-- << std::endl;

    // Prefix decrement (updates value before it is used in expression)
    std::cout << "Lives using prefix decrement: " << --player_lives << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}