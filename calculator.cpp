// Make a simple calculator

#include <iostream>

int main () {

    int num1, num2, num3;
    char opr;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> opr;

    std::cout << "Enter secound number: ";
    std::cin >> num2;

    if (opr == '+') {
        num3 = num1 + num2;
    }
    
    std::cout << "Result: " << num3 << std::endl;

    return 0;
}