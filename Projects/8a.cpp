#include <iostream>
using namespace std;
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
double max(double a, double b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    double c, d;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two double values: ";
    cin >> c >> d;
    cout << "The larger of the two integers is: " << max(a, b) <<endl;
    cout << "The larger of the two double values is: " << max(c, d) <<endl;
    return 0;
}


