// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
int main(){

    std::string name; 

    //std::flush ends the line but no new line character
    std::cout << "Enter your name: " << std::flush;

    //cin is for character input (only works for single words)

    //Extraction operator (>>) extracts information and assigns it to variable
    std::cin >> name;

    //Can do concatenation with multiple left bound inseration
    //operators or with the + sign
    std::cout << "Hi There " + name + "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}