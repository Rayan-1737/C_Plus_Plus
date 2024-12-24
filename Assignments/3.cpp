/*  Write a C++ program to define a class Student with the following: 
    Private data members: name and age.
    A parameterized constructor to initialize the name and age.
    A copy constructor to create a copy of an existing Student object.
    A member function display() to print the details of the student.
    In the main() function, create an object of the Student class using the
    parameterized constructor and another object using the copy constructor.
    Display the details of both students.     */ 
    
#include <iostream>
using namespace std;               
class Student {
private:
    string name;
    int age;

public:
     Student(string studentName, int studentAge) : name(studentName), age(studentAge) {}   // This Is a Parameterized constructor

    
    Student(const Student &student) : name(student.name), age(student.age) {}    // This Is Copy constructor

    // A Function to display student details (As told in the question)
    void display() const {
        cout << "Name:-  " << name <<endl << "Age:-  " << age << endl;
    }
};

int main() {
    string name;
    int age;
    
    cout << "Enter the student's name:-  ";
    cin >> name;
    cout << "Enter the student's age:-  ";
    cin >> age;

    Student student1(name, age);    // Student object using parameterized constructor
    cout<<endl;
    Student student2 = student1;   // copy of student1 

    // Display The details of both The students
    student1.display();
    cout<<endl;
    student2.display();

    return 0;
}    

