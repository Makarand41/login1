#include <iostream>

int main() {
    int number;

    // Example 1: Simple if-else statement to check if a number is positive or negative
    std::cout << "Example 1: Check if a number is positive or negative\n";
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << number << " is positive.\n";
    } else if (number < 0) {
        std::cout << number << " is negative.\n";
    } else {
        std::cout << number << " is zero.\n";
    }

    // Example 2: Nested if-else statement to check if a number is even or odd
    std::cout << "\nExample 2: Check if a number is even or odd\n";
    std::cout << "Enter another number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << number << " is even.\n";
    } else {
        std::cout << number << " is odd.\n";
    }

    return 0;
}
