// Date: 2024-06-15
// Phase 0 - Setup editor + CMake + Compiler and run all project

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long num1, num2;
    char op;

    cout << "===== Simple Calculator =====" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                long double result =
                    static_cast<long double>(num1) / num2;

                cout << fixed << setprecision(10);
                cout << "Result = " << result << endl;
            }
            break;

        default:
            cout << "Error: Invalid operator." << endl;
    }

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}