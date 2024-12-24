#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string:-  ";
    getline(cin, str1);

    cout << "Enter second string:-  ";
    getline(cin, str2);

    string reversed_str1 = str1;
    reverse(reversed_str1.begin(), reversed_str1.end());

    string concatenated_str = str1 + str2;

    cout << "Reverse of first string is:-  " << reversed_str1 <<endl;
    cout << "Concatenated string is:-  " << concatenated_str <<endl;
    cout << "Length of first string is:-  " << str1.length() <<endl;

    return 0;
}
