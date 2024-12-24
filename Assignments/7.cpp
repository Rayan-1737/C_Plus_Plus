/*  Write a C++ program to input 5 integers from the user into an array and find
the largest number in the array       */

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;   // const is used so that only 5 values can be entered and stored
    int numbers[SIZE];

    cout << "Enter 5 integers:-  ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    int largestNumber = numbers[0];
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] > largestNumber) {
            largestNumber = numbers[i];
        }
    }

    cout << "The largest number is: " << largestNumber << endl;
    return 0;
}


