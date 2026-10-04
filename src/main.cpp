// Date: 2024-06-15
// Phase 0 - Setup editor + CMake + Compiler and run all project
#include <iostream>

int main()
{
    double num1, num2;
    char op;

    std::cout << "===== Simple Calculator =====\n";

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (op == '+')
    {
        std::cout << "Result = " << num1 + num2 << std::endl;
    }
    else if (op == '-')
    {
        std::cout << "Result = " << num1 - num2 << std::endl;
    }
    else if (op == '*')
    {
        std::cout << "Result = " << num1 * num2 << std::endl;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            std::cout << "Error: Division by zero is not allowed.\n";
        }
        else
        {
            std::cout << "Result = " << num1 / num2 << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Invalid operator.\n";
    }

    return 0;
}