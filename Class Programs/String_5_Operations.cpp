#include <iostream>
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int i = 0, j = 0;

    // 1. Concatenation
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') str1[i++] = str2[j++];
    str1[i] = '\0';
    cout << "Concatenated string: " << str1 << endl;

    // 2. Length
    int length = 0;
    while (str1[length] != '\0') length++;
    cout << "Length of concatenated string: " << length << endl;

    // 3. Access character
    cout << "First character of concatenated string: " << str1[0] << endl;

    // 4. Replace a character
    str1[0] = 'H';
    cout << "String after modification: " << str1 << endl;

    // 5. Substring
    cout << "Substring (first 3 characters): ";
    for (int k = 0; k < 3 && str1[k] != '\0'; k++) cout << str1[k];
    cout << endl;

    return 0;
}
