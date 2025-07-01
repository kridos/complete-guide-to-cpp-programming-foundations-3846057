// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

/*This is a 
multiline comment*/

//Every line of executable code must be part of a function (defined with return type, name, and parameters)

//compiler directive (always start with #) named include
#include <iostream>

//Allows us to do C-style input and output operations (such as printf)
#include <cstdio>

//main function must return an int
//can receive nothing or strings from command line
//argc represents the number of command line arguments and
//argv is C-style strings representing the actual arguments
int main(int argc, char* argv){
    //iostream file is a member of the standard (std) library (membership is represented by :: which
    //is the scope resolution operator)

    //cout is short for character output

    //left bound insertion operator (<<) where you insert whatever you want to send to the object to the
    //left of the operator on the right of the operator (can use operator consecutively)

    //endl is for end of the line (new line character)
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;

    //C-style output
    printf("Hey, there!\n");

    //returning 0 usually means program usually means program was successfully and non-zero 
    //usually means some error occurred

    return 0;
}
