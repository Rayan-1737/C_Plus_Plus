#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number:- ";
    cin >> number;
    if (number > 0) cout << "The number is Positive.";
    else if (number < 0) cout << "The number is Negative.";
    else cout << "The number is Zero.";
    
}
