// Complete Guide to C++ Programming Foundations
// Exercise 09_02
// Opening a Text File for Reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ifstream inFile; //input stream from a file
    std::string str;
    int number;
    char letter;

    inFile.open("players.txt");
    if (inFile.fail()) //Checks if the open function failed
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){ //assuming that file has exact format that we need
            getline(inFile, str);
            std::cout << str <<  ", ";
            getline(inFile, str);
            number = stoi(str); //convert string to int
            std::cout << number <<  ", ";
            getline(inFile, str);
            letter = str[0];
            std::cout << letter <<  std::endl;
        }
        inFile.close();
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
