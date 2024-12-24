#include <iostream>
using namespace std;

class car {
private:
    int price;  // Hiding price in private

public:
    string brand;
    string model;
    int seats;

    // Constructor to initialize all members
    car(string b, string m, int p, int s) {
        brand = b;
        model = m;
        price = p;  // Initialize private member
        seats = s;
    }

    // Method to display the price directly
    void displayPrice() {
        cout << "Price:- " << price << endl;
    }
};

int main() {
    car spec("BMW", "X5", 100000000, 6);

    // Access public members directly
    cout << "Name:- " << spec.brand << endl;
    cout << "Model:- " << spec.model << endl;
    cout << "Seats:- " << spec.seats << endl;

    // Access the private price using the displayPrice method
    spec.displayPrice();

    return 0;
}
