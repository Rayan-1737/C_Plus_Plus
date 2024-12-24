#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;
    cout<<"Enter A Number:- ";
    cin >> num;

    while (num) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10;
    }

    cout << reverse;
    return 0;
}   





