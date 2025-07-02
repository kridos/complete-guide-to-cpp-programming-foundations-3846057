// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

//Might declare the function in one spot (prototype) and define the function in a different spot

//Normally arguments are passed by value (copies of the arguments)
//Can pass arguments as variables
//Can pass arguments as references

//Takes arguments by value
int square(int x){
    x = x * x;
    return x;
}

//Takes arguments by address
void swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Takes arguments by reference
//References are aliases and treated as the variables themselves
void swap(int &x, int&y){
    int temp = x;
    x = y;
    y = temp;

}

int main(){
    int a = 9, b;
    b = square(a);
    // TODO: square
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}


