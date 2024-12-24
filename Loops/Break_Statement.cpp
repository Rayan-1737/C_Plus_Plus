#include <iostream>
using namespace std;
int main() {
    int i;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exit the loop when i is 3
        }
        cout << i << " ";
    }
}


// The break statement in C++ is used to immediately exit a loop 
// (like for, while, do-while) or a switch statement, even if the loop condition is still true.