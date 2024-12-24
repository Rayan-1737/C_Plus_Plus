/* Write a C++ program to demonstrate different types of inheritance by
creating a hierarchy for a university management system.
The program should include the following:
● Base Class (Person): Contains common attributes like name and age and a
method to display them.
● Derived Class (Student): Inherits from Person and includes additional
attributes like roll number and course.
● Derived Class (Faculty): Inherits from Person and includes attributes like
employee ID and department. 
with user input and namespace std*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;
    string course;

    void display() const {
        Person::display();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Faculty : public Person {
public:
    int employeeID;
    string department;

    void display() const {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student;
    Faculty faculty;

    cout << "Enter student details:" << endl;
    getline(cin, student.name);
    cout << "Age: ";
    cin >> student.age;
    cout << "Roll Number: ";
    cin >> student.rollNumber;
    cin.ignore();
    cout << "Course: ";
    getline(cin, student.course);

    cout << "\nEnter faculty details:" << endl;
    cin.ignore();
    cout << "Name: ";
    getline(cin, faculty.name);
    cout << "Age: ";
    cin >> faculty.age;
    cout << "Employee ID: ";
    cin >> faculty.employeeID;
    cin.ignore();
    cout << "Department: ";
    getline(cin, faculty.department);

    cout << "\nStudent Details:" << endl;
    student.display();

    cout << "\nFaculty Details:" << endl;
    faculty.display();

    return 0;
}
