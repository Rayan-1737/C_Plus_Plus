// Write a C++ program to calculate the sum of all even numbers and 
// the product of all odd numbers between 1 and n(inclusive).

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter A Number For Sum Of Even And Product Of Odd (n):-   ";
    cin >> n;

    int even_sum = 0;
    int odd_product = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) 
        {
            even_sum = even_sum + i;
        } 
        else
        {
            odd_product = odd_product * i;
        }
    }

    cout << "Sum Of Even Numbers Is:-  " << even_sum <<endl;
    cout << "Product Of Odd Numbers Is:-  " << odd_product <<endl;

    return 0;
}


