/* Create a program for “Student Grading System”
90% and above: Grade A
75% - 89%: Grade B
50% - 74%: Grade C
Below 50%: Grade F  */

#include <iostream>
using namespace std;
int main() {
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 75 && marks < 90) {
        cout << "Grade: B" << endl;
    } 
    else if (marks >= 50 && marks < 75) {
        cout << "Grade: C" << endl;
    } 
    else
    {
        cout << "Grade: F" << endl;
    }
    return 0;
} 