#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (1 to 100):- ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 80) {
        cout << "Grade: B \n";
    }
    else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } 
    else if (marks >= 60) {
        cout << "Grade: D \n";
    } 
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

