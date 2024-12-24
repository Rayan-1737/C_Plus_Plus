/*  Develop a C++ program for a Student Management System that incorporates
    the following
    Menu-Driven Approach: Provide options for:
    ● Adding a new student.(SID,SNAME,CLASS THROUGH USER INPUT)
    ● DISPLAY student DETAILS.  */  

#include <iostream>
using namespace std;

struct Student {
    int studentId;
    char studentName[50];
    char studentClass[20];
};

Student students[10];  // Array to hold up to 10 students
int studentCount = 0;   // Track the number of students

void addStudent() {
    if (studentCount >= 10) {
        cout << "Student list is full!" << endl;
        return;
    }

    Student student;
    cout << "Enter student ID: ";
    cin >> student.studentId;
    cout << "Enter student name: ";
    cin.ignore();  // Clear input buffer
    cin.getline(student.studentName, 50);  // Use getline for reading the name
    cout << "Enter student class: ";
    cin >> student.studentClass;

    students[studentCount] = student;
    studentCount++;
}

void displayStudents() {
    if (studentCount == 0) {
        cout << "No students to display." << endl;
        return;
    }
    cout << "Student Details:" << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << "Student ID: " << students[i].studentId << endl;
        cout << "Student Name: " << students[i].studentName << endl;
        cout << "Student Class: " << students[i].studentClass << endl;
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Add new student" << endl;
        cout << "2. Display student details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
