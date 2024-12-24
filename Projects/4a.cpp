#include <iostream>
using namespace std;
int main() {
    const int SIZE = 8;
    int numbers[SIZE];
    int evenCount = 0, oddCount = 0;

    cout << "Enter 8 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}
