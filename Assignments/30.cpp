// SWAPPING OF TWO NUMBERS USING POINTERS.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter 1st Number:-  ";
    cin >>a;

    int b;
    cout << "Enter 2nd Number:-  ";
    cin >>b;

    int* pa = &a;
    int* pb = &b;

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
