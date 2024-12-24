/*   Write a program that defines a function int add(int a, int b) to calculate and
    return the sum of two integers.
    ● Call this function from main() with two user-input values.
    ● Display the returned result.  */ 


#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}

int main() {
    int x;
    cout << "Enter 1st Number:-  ";
    cin >> x ;
    int y;
    cout << "Enter 2nd Number:-  ";
    cin >> y ;

    cout << "Their sum is:-  " << add(x, y) <<endl;
    return 0;
}


