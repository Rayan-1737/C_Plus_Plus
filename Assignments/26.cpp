/*   Write a C++ program to create a simple text file. The program should
     provide the following functionalities:
     1. APPEND: Allow the user to write new content to a text file. Existing content, if
        any, should be NOT overwritten.
     2. Read: Display the entire content of the text file to the user.  */


#include <iostream>
#include <fstream>
using namespace std;

// Function to append content to a file
void appendToFile(string filename) {
    ofstream file(filename, ios::app);
    if (!file) {
        cerr << "Unable to open file " << filename << endl;
        return;
    }

    string line;
    cout << "Enter the text to append:- " << endl;
    while (getline(cin, line)) {
        file << line << endl;
    }
    file.close();
}

// Function to read a file
void readFile(string filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Unable to open file " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    string filename;
    cout << "Enter the name of the file:-  ";
    cin >> filename;

    int choice;
    cout << "1. Append content to the file" << endl;
    cout << "2. Read the content of the file" << endl;
    cout << "Enter your choice:-  ";
    cin >> choice;

    if (choice == 1) {
        appendToFile(filename);
    } else if (choice == 2) {
        readFile(filename);
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
