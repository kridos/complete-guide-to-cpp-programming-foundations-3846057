// Complete Guide to C++ Programming Foundations
// Exercise 08_08
// Algorithms, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//Types of Iterators:
//1. Input Iterator -> Read one-way, one-pass (only read, 
//only moves forward, one pass)
//2. Output Iterator -> Write one way, one-pass (only write, only moves forward, one pass)
//3. Forward Iterator -> Read/Write one-way, multi-pass (read and write, 
//only moves forward, supports multiple passes pass)
//4. Forward Iterator -> Read/Write two-way, multi-pass (read and write, 
//moves forward and backward, supports multiple passes pass)
//4. Random Access Iterator -> Read/write anywhere (read and write, 
//able to access any element by index, supports multiple passes pass)


int main(){
    // A vector of game item names
    std::vector<std::string> items = {"potion", "shield", "sword", "shield", "potion", "potion"};

    // Sort the items alphabetically
    /*sort function*/
    std::sort(items.begin(), items.end());

    std::cout << "Sorted items: ";
    for (const auto& item : items) std::cout << item << " ";
    std::cout << std::endl;

    // Find the first occurrence of "shield"
    auto it = std::find(items.begin(), items.end(), "shield");/*find function*/

    if (it != items.end()) std::cout << "Found: " << *it << std::endl;
    else std::cout << "Item not found." << std::endl;

    // Count the number of "potion" items
    int potion_count = std::count(items.begin(), items.end(), "potion");/*count function*/
    std::cout << "Number of potions: " << potion_count << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
