// WAP in C++ to take the string from the user
// Use at least three function of string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    // Taking string input from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Function 1: Convert string to uppercase
    string upper = input;
    for (int i = 0; i < upper.size(); ++i) {
        upper[i] = toupper(upper[i]);
    }

    // Function 2: Convert string to lowercase
    string lower = input;
    for (int i = 0; i < lower.size(); ++i) {
        lower[i] = tolower(lower[i]);
    }

    // Function 3: Find the length of the string
    int length = input.length();

    // Displaying the results
    cout << "Original String: " << input << endl;
    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Length: " << length << endl;

    return 0;
}

