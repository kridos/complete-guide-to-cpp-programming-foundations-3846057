// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>


//Objects can be created on the stack or heap
//Can overload operators like +, -, [], ==
//Fields are known as data members
//Methods are known as function members
//Members can be public, private, or protected

//Constructor initializes objects (can be overloaded)
//Destructors clean up resources (important when objects are on the heap)
//Constuctor is called when object is initialized and destructor is automatically 
//called when object is destroyed (out of scope if on the stack or explicitly deleted if on the heap)
//Defining each of these is optional, but usually good to do

class Inventory {
private:
    std::vector<std::string> * items; //Pointer to vector of items
    int capacity; //Maximum number of items allowed

};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
