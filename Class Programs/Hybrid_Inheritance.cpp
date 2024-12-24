#include <iostream>
using namespace std;


class Input {
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


class Display {
public:
    void showResult(int result) {
        cout << "Addition of the three numbers: " << result << endl;
    }
};


class Calculator : public Input, public Display {
public:
    int result;

    void add() {
        result = a + b + c;
    }
};

int main() {
    Calculator calc;

    calc.getInputs();       
    calc.add();             
    calc.showResult(calc.result); 

    return 0;
}
