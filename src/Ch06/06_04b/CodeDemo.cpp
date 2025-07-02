// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

//Can return built-in types
//Can return pointers (useful for dynamic memory)
//Can return references
//Can return nothing (void)


std::string getPlayerName();
int calculateScore(int baseScore, int multiplier);
void displayScore(const std::string&, int); //good ideat to use reference so we aren't making copy of object if it is large


std::string getPlayerName(){
    return "Alex";
}

int calculateScore(int baseScore, int multiplier){
    return baseScore * multiplier;
}

void displayScore(const std::string& name, int score){
    std::cout << name << " scored " << score << " points." << std::endl;

}

int main(){
    std::string playerName = getPlayerName();
    int score = calculateScore(75, 2);

    displayScore(playerName, score);
    
    std::cout << std::endl << std::endl;
    return 0;
}
