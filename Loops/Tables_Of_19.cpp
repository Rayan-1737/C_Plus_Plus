#include <iostream>
using namespace std;

int main() {
    int i;
    for (int i = 1; i <= 10; i++) {
        cout << "19 x " << i << " = " << 19 * i << endl;
    }
    
}


#include <iostream>
using namespace std;

int main() {
    int i;
    for (int i = 19; i <= 190; i=i+19) {
        cout << "19 x " << i << " = " << i << endl;
    }
}
    

// User Input Tables:-

#include <iostream>
using namespace std;
int main() {
    int i,n;
    cout<<"Enter A Number:-";
    cin>>i;
    for (int n = 1; n <=10; n++) {
        cout << i<<" x " << n << " = " << i*n << endl;
    }
}
   