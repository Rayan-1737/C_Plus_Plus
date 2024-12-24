/*
Write a recursive function int factorial(int n) that calculates the factorial of a
given number n.
In the main() function, prompt the user to enter a positive integer and call the
factorial function to compute and display the result.
Example: For input 5, the output should be 120.
using namespace std and user input     */

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int number;
    cout << "Enter a positive integer:-  ";
    cin >> number;
    cout << "The factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

