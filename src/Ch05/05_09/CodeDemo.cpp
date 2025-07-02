// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    
    // Write your code here
    for(const auto& x: resources)
        result += x.type == 'B'? x.baseCost * 1.05: x.type == 'L'? x.baseCost * 1.15: x.baseCost;
    
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
