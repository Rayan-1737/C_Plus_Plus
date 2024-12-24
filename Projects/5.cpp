#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest number is: " << largest << endl;
   
    return 0;
}