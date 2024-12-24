#include <iostream>
using namespace std;

class car {
public:
    string brand;

    // Constructor
    car(string b) {
        brand = b;
        cout << "Car " << brand << " created." << endl;
    }

    // Destructor
    ~car() {
        cout << "Car " << brand << " destroyed." << endl;
    }
};

int main() {
    car myCar("BMW"); // Constructor called here

    cout << "Using the car..." << endl;

    // Destructor will be called automatically when 'myCar' goes out of scope
    return 0;
}
