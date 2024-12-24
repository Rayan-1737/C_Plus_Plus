/* Write a program to demonstrate the use of a parameterized constructor. Create
a class Rectangle that accepts the length and width as arguments and calculates the
area of the rectangle. */

#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;
    public:
        Rectangle(double l, double w) : length(l), width(w) {}
        double area() {
            return length * width;
        }
};

int main() {
    double l;
    cout << "Enter the length of the rectangle:-  ";
    cin >> l;
    
    double w;
    cout << "Enter the width of the rectangle:-  ";
    cin >> w;
    Rectangle rect(l, w);
    cout << "The area of the rectangle is: " << rect.area() << endl;
    return 0;
}
