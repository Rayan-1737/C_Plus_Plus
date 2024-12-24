#include <iostream>
using namespace std;
int main() {
    int i;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip the rest when i is 3
        }
        cout << i << " ";
    }

}




#include <iostream>
using namespace std;
int main() {
    int i;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 1 ) {
            continue;  
        }
        cout << i << " ";
    }

}