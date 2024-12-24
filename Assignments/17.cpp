/* Create a C++ program for Library management system HAVING DATA
MEMBERS :BOOKID,BOOKNAME,AUTHOR PERFORM OPERATION TO
ADD AND DISPLAY
using namespace std; and user input*/

#include <iostream>
using namespace std;

struct Book {
    int id;
    char name[100];
    char author[100];
};

int main() {
    Book library[10];  // Array to hold a maximum of 10 books
    int bookCount = 0;
    int choice;

    do {
        cout << "1. Add book" << endl;
        cout << "2. Display books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 && bookCount < 10) {
            cout << "Enter book ID: ";
            cin >> library[bookCount].id;
            cout << "Enter book name: ";
            cin.ignore();  // To ignore the newline left in the buffer
            cin.getline(library[bookCount].name, 100);
            cout << "Enter book author: ";
            cin.getline(library[bookCount].author, 100);

            bookCount++;
        }
        else if (choice == 2) {
            cout << "Library books:" << endl;
            for (int i = 0; i < bookCount; i++) {
                cout << "ID: " << library[i].id << endl;
                cout << "Name: " << library[i].name << endl;
                cout << "Author: " << library[i].author << endl;
                cout << endl;
            }
        }
        else if (choice == 3) {
            cout << "Exiting program." << endl;
        }
        else {
            cout << "Invalid choice or library full." << endl;
        }

    } while (choice != 3);

    return 0;
}
