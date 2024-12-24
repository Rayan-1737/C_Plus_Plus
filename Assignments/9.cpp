/*   Write a program to reverse the elements of an array. For example, if the array
    is {1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1} 
    using nmaespace std and user input  */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array:-  ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:-  ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

