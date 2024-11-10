#include <iostream>
using namespace std;

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform the operation based on user input
    switch (operation)
    {
    case '+':
        cout << "Result: " << add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << divide(num1, num2) << endl;
        }
        else
        {
            cout << "Error! Division by zero." << endl;
        }
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

// Function Definitions

// Add two numbers
float add(float a, float b)
{
    return a + b;
}

// Subtract two numbers
float subtract(float a, float b)
{
    return a - b;
}

// Multiply two numbers
float multiply(float a, float b)
{
    return a * b;
}

// Divide two numbers
float divide(float a, float b)
{
    return a / b;
}
