/*  Create a class called Factorial having member function fact() to calculate the
factorial of a given number. Throw an exception if number entered by the user is
negative or zero  */

#include <iostream>
using namespace std;

class Factorial {
public:
    int fact(int n) {
        if (n <= 0) {
            cout << "Error: Number must be positive and greater than zero." << endl;
            return -1;  // Return -1 to indicate an error
        }
        if (n == 1) {
            return 1;
        }
        return n * fact(n - 1);
    }
};

int main() {
    Factorial factorialCalculator;
    int number;

    cout << "Enter a positive number to calculate its factorial: ";
    cin >> number;

    int result = factorialCalculator.fact(number);
    if (result != -1) {  // Check if the calculation was successful
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}

