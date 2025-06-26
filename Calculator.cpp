#include <iostream>  // Input/output functions ke liye
using namespace std;

int main() {
    double num1, num2;   // Do numbers jo user se liye jayenge
    char op;             // Operator (+, -, *, /)

    // User se input lena
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;  // Result ko store karne ke liye

    // Arithmetic operation based on user input
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        // Zero se division check karna zaroori hai
        if (num2 != 0)
            result = num1 / num2;
        else {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 1;  // Program yahan end ho jayega error ke sath
        }
    } else {
        // Invalid operator input
        cout << "Error: Invalid operator!" << endl;
        return 1;  // Program yahan end ho jayega error ke sath
    }

    // Result display karna
    cout << "Result: " << result << endl;

    return 0;  // Program successfully end ho gaya
}
