/*  Create Result-sheet Program using student class, having data member:
roll, name, sub1, sub2, sub3, total
Display Result-sheet in following format:
=========================================
Roll No. Name S1 S2 S3 Total
=========================================
1 A 67 75 88 23    */

#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    int subject1, subject2, subject3, total;

    void calculateTotal() {
        total = subject1 + subject2 + subject3;
    }

    void display() const {
        // Manually format the output with spacing to align columns
        cout << rollNumber << "     " << name << "     "
             << subject1 << "    " << subject2 << "    "
             << subject3 << "    " << total << endl;
    }
};

int main() {
    Student students[1];  // Array to store 1 student (adjust size if needed)

    // Input student details
    for (int i = 0; i < 1; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Subject 1 Marks: ";
        cin >> students[i].subject1;
        cout << "Subject 2 Marks: ";
        cin >> students[i].subject2;
        cout << "Subject 3 Marks: ";
        cin >> students[i].subject3;
        students[i].calculateTotal();
    }

    // Display Result-Sheet Header
    cout << "=========================================" << endl;
    cout << "RollNo. Name     S1   S2   S3   Total" << endl;
    cout << "=========================================" << endl;

    // Display student details
    for (int i = 0; i < 1; ++i) {
        students[i].display();
    }

    return 0;
}
