#include <iostream>

/*/////////////////////////////////////////////////////////////////////////////////////////////
 CLASS: CS 3060
 NAME: PJ OLENDER
 DATE: 09/03/2022
 ASSIGNMENT #: 16.3

 Minimum/Maximum Templates
    Write templates for the two functions minimum and maximum. The minimum function should accept
    two arguments and return the value of the argument that is the lesser of the two. The maximum
    function should accept two arguments and return the value of the argument that is the greater
    of the two. Design a simple driver program that demonstrates the templates with various data types.

 /////////////////////////////////////////////////////////////////////////////////////////////*/

// Template minimum function returns the minimum between 2 values
template <class T>
T minimum(T a, T b){
    return (a < b) ? a : b;
}

// Template maximum function returns the maximum between 2 values
template <class T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

int main() {
    // Test the template using Integers
    std::cout << "[MINIMUM] type [INT]: of 12 and 45 is:\t" << minimum(12, 45) << std::endl;
    std::cout << "[MAXIMUM] type [INT]: of 12 and 45 is: \t" << maximum(12, 45) << "\n" << std::endl;

    // Test the template using Doubles
    std::cout << "[MINIMUM] type [DOUBLE]: of 12 and 45 is: \t" << minimum(57.34, 81.25) << std::endl;
    std::cout << "[MAXIMUM] type [DOUBLE]: of 12 and 45 is: \t" << maximum(57.34, 81.25) << "\n" << std::endl;

    // Test the template using Strings
    std::cout << "[MINIMUM] type [STRING]: of 'Hello World' and 'Goodbye World' is: \t" << minimum("Hello World", "Goodbye World") << std::endl;
    std::cout << "[MAXIMUM] type [STRING]: of 'Hello World' and 'Goodbye World' is: \t" << maximum("Hello World", "Goodbye World") << "\n" << std::endl;

    return 0;
}
