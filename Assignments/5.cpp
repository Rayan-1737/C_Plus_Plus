#include <iostream>
using namespace std;

// Function that find the maximum of two integers
int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } 
    else 
    {
        return num2;
    }
}

// Function that find the maximum of two doubles
double max(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    } 
    else 
    {
        return num2;
    }
}

int main() {
    int int1, int2;
    double double1, double2;

    cout << "Enter two integers:-  ";
    cin >> int1 >> int2;
    cout << "The larger integer is: " << max(int1, int2) << endl;

    cout << "Enter two double values:-  ";
    cin >> double1 >> double2;
    cout << "The larger double value is: " << max(double1, double2) << endl;

    return 0;
}





