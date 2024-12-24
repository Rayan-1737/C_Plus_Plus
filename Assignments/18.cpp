/* Build a simple calculator using a switch case. 
using namespace std and user input*/

#include <iostream>
using namespace std;

int main() {
    float number1, number2;
    char operation;
  
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers:-  ";
    cin >> number1 >> number2;

    switch (operation) {
        case '+':
            cout << "Result: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "Result: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "Result: " << number1 * number2 << endl;
            break;
        case '/':
            if (number2 != 0) {
                cout << "Result: " << number1 / number2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please use +, -, *, or /." << endl;
    }

    return 0;
}
