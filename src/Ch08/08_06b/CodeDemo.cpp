// Complete Guide to C++ Programming Foundations
// Exercise 08_06
// Queues and Stacks, by Eduardo Corpeño 

#include <iostream>
#include <queue>
#include <stack>

//Components of the C++ STL
//1. Containers -> Array-like data structures that store
//collections of objects
//2. Iterators -> Pointer-like objects that allow traversal
//of containers
//3. Algorithms -> A collection of algorithm implementations
//for operations such as search and sort
//4. Functors (Function Objects) -> Function objects that can be parametrized
//in their constructors


int main(){
    std::queue<std::string> eventQueue;  // FIFO container for game events
    std::stack<std::string> undoStack;  // LIFO container for undo operation

    // Adding events to the queue
    eventQueue.push("Move Forward");
    eventQueue.push("Collect Coin");
    eventQueue.push("Attack Enemy");

    // Processing events in FIFO order
    while (!eventQueue.empty()){
        std::string currentEvent = eventQueue.front();
        std::cout << "Performing event: " << currentEvent << std::endl;
        eventQueue.pop(); 
        undoStack.push(currentEvent);
    }

    while(!undoStack.empty()){
        std::cout << "Undo action: " << undoStack.top() << std::endl;
        undoStack.pop();
    }

    std::cout << std::endl << std::endl;
    return 0;
}
