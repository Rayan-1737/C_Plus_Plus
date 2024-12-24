#include <iostream>
using namespace std;

class Base {
public:
    int a, b, c;

    void getInputs() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
    }
};

class Calculator : public Base {
public:
    int result;

    void add() {
        result = a + b + c;
    }

    void displayResult() {
        cout << "Addition of the three numbers: " << result << endl;
    }
};

int main() {
    Calculator calc;

    calc.getInputs();
    calc.add();
    calc.displayResult();

    return 0;
}


