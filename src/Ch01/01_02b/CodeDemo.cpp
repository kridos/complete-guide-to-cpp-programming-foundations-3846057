// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>

//main function must return an int
//can receive nothing or strings from command line
int main(){
    //iostream file is a member of the standard (std) library (membership is represented by :: which
    //is the scope resolution operator)

    //cout is short for character output

    //left bound insertion operator (<<) where you insert whatever you want to send to the object to the
    //left of the operator on the right of the operator (can use operator consecutively)

    //endl is for end of the line (new line character)
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
