/*Create an Array having 20 integer inputs from user and print the following:

● number of positive numbers
● number of negative numbers
● number of odd numbers
● number of even numbers
● number of 0s.  */

#include <iostream>
using namespace std;

int main() {
    int arr[20];
    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
        if (arr[i] > 0) pos++;
        if (arr[i] < 0) neg++;
        if (arr[i] % 2 == 0) even++;
        if (arr[i] % 2 != 0) odd++;
        if (arr[i] == 0) zero++;
    }

    cout << "Number of positive numbers: " << pos << endl;
    cout << "Number of negative numbers: " << neg << endl;
    cout << "Number of odd numbers: " << odd << endl;
    cout << "Number of even numbers: " << even << endl;
    cout << "Number of 0s: " << zero << endl;

    return 0;
}
