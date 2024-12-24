#include <iostream>
using namespace std;

class Rectangle {
 private:
  int length;
  int width;

 public:
  Rectangle() : length(1), width(1) {}
  int area() 
  const 
  { 
    return length * width;
 }
};

int main() {
  Rectangle Rec;
  cout << "Area of rectangle: " << Rec.area() <<endl;
  return 0;
}
   



