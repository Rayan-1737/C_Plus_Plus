/* Write a program where a base class defines a display() function, and the
derived class overrides it to provide its implementation.
Why is the virtual keyword necessary for overriding? */

#include <iostream>
using namespace std;
class Base {
 public:
  virtual void display() const = 0;  // Pure virtual function
};

class Derived : public Base {
 public:
  void display() const override {
    cout << "Derived class implementation of display()" << endl;
  }
};

int main() {
  Base* basePtr = new Derived();

  basePtr->display();  // Output: Derived class implementation of display()

  delete basePtr;
  return 0;
}
 
