#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

// 1. Hello World
class HelloWorld {
public:
    void display() {
        cout << "Hello World!" << endl;
    }
};

// 2. Swap without temporary variable
class SwapWithoutTemp {
public:
    void execute() {
        int x = 10, y = 3;
        cout << "x is: " << x << endl << "y is: " << y << endl;
        x = x + y;
        y = x - y;
        x = x - y;
        cout << "After swap\nx is: " << x << endl << "y is: " << y << endl;
    }
};

// 3. Swap with temporary variable
class SwapWithTemp {
public:
    void execute() {
        int x = 10, y = 3, temp;
        cout << "x is: " << x << endl << "y is: " << y << endl;
        temp = x;
        x = y;
        y = temp;
        cout << "After swap\nx is: " << x << endl << "y is: " << y << endl;
    }
};

// 4. Addition
class Addition {
public:
    void execute() {
        int a = 5, b = 7;
        cout << "Sum is: " << (a + b) << endl;
    }
};

// 5. Multiplication
class Multiplication {
public:
    void execute() {
        int n1 = 6, n2 = 2;
        cout << "Product is: " << (n1 * n2) << endl;
    }
};

// 6. Calculator
class Calculator {
public:
    void execute() {
        float a, b;
        char op;
        cout << "Enter type of calculation (+, -, *, /): ";
        cin >> op;
        cout << "Enter the two numbers to calculate: ";
        cin >> a >> b;
        switch (op) {
            case '+': cout << "Result: " << (a + b) << endl; break;
            case '-': cout << "Result: " << (a - b) << endl; break;
            case '*': cout << "Result: " << (a * b) << endl; break;
            case '/': cout << "Result: " << (a / b) << endl; break;
            default: cout << "Invalid operator!" << endl;
        }
    }
};

// 7. Even or Odd
class EvenOdd {
public:
    void execute() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0)
            cout << "The number is even" << endl;
        else
            cout << "The number is odd" << endl;
    }
};

// 8. Temperature Conversion
class TemperatureConversion {
public:
    void execute() {
        int c;
        cout << "Enter Celsius temperature: ";
        cin >> c;
        cout << "Fahrenheit temperature is: " << (c * 1.8 + 32) << endl;
    }
};

// Main Function
int main() {
    HelloWorld hw;
    hw.display();

    SwapWithoutTemp sw;
    sw.execute();

    SwapWithTemp spt;
    spt.execute();

    Addition add;
    add.execute();

    Multiplication mult;
    mult.execute();

    Calculator calc;
    calc.execute();

    EvenOdd eo;
    eo.execute();

    TemperatureConversion tempConv;
    tempConv.execute();

    return 0;
}
