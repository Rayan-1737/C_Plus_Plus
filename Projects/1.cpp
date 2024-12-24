#include <iostream>
using namespace std;

int main() {
    int n, evenSum = 0, oddProduct = 1;

    cout << "Enter a number (n):-  ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i; 
        } 
        else 
        {
            oddProduct *= i; 
        }
    }

    cout << "Sum of even numbers:-  " << evenSum << endl;
    cout << "Product of odd numbers:-  " << oddProduct << endl;

    return 0;
}
