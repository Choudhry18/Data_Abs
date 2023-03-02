#include <iostream>
#include "ArrayStack.h"

int main()
{
    ArrayStack<int> stack;

    // Test push() and peek()
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "Top element: " << stack.peek() << std::endl; // Output: Top element: 3

    // Test pop()
    int popped = stack.pop();
    std::cout << "Popped element: " << popped << std::endl; // Output: Popped element: 3

    // Test isEmpty()
    std::cout << "Stack is empty: " << std::boolalpha << stack.isEmpty() << std::endl; // Output: Stack is empty: false

    // Test copy constructor
    ArrayStack<int> stack2(stack);
    std::cout << "Top element of copied stack: " << stack2.peek() << std::endl; // Output: Top element of copied stack: 2

    return 0;
}

