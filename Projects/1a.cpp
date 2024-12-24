#include <iostream>
using namespace std;
int main() {
    int numbers[5];

    cout << "Input 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int largestNumber = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largestNumber) {
            largestNumber = numbers[i];
        }
    }

    cout << "Largest number is: " << largestNumber <<endl;

    return 0;
}
