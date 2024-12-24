#include <iostream>
using namespace std;
int main() {
    int n1, n2, product;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    int* ptr1 = &n1;
    int* ptr2 = &n2;

    product = *(ptr1) * *(ptr2);

    cout << "Product is: " << product <<endl;

    return 0;
}
