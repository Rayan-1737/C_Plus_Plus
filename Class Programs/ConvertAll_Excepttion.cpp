// 1) Factorial (Using Exception Handling)

#include <iostream>
using namespace std;    

int main() {
    int num;
    cout << "Enter a number:-  ";
    cin >> num;
    try {
        if (num < 0) {
            throw num;
        }
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is:-  " << fact << endl;
    }
    catch (int num) {
        cout << "Factorial of " << num << " is not possible " << endl;
    }
    return 0;
}



//  2) Even/Odd (Using Exception Handling)

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number:-  ";
    cin >> num;
    try {
        if (num % 2 == 0) {
            cout << num << " is Even Number " << endl;
        }
        else {
            throw num;
        }
    }
    catch (int num) {
        cout << num << " is Odd Number " << endl;
    }
    return 0;
}


//  3)  Positive/Negative/Zero (Using Exception Handling)

#include <iostream>
using namespace std;
int main(){
try {
  int num;
  cout<<"Enter A Number:-  ";
  cin>>num;
  if (num > 0) {
    cout << "Number Is Positive";
  } 
  else if (num == 0)
  {
    throw (num);
    cout<<"Number Is Zero ";
  }
  else
  {
      cout<<"Number Is Negative ";
  }
  
}
catch (int mynum) {
  cout << " Number Is Zero\n";
  cout << "Number is: " << mynum;
  return 0;
}
}


//  4) Palindrome (Using Exception Handling)

# include <iostream>
using namespace std;
int main() {
    int num, rev = 0, rem;
    cout << "Enter a number:-  ";
    cin >> num;
    try {
        if (num < 0) {
            throw num;
        }
        while (num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if (rev == num) {
            cout << "Number is Palindrome" << endl;
        }
        else {
            cout << "Number is not Palindrome" << endl;
        }
    }
    catch (int num) {
        cout << "Number is not Palindrome" << endl;
    }
    return 0;
}


//  5) Swap (Using Exception Handling)

#include <iostream>
using namespace std; 
int main() {
    int num1, num2, temp;
    cout << "Enter a number:-  ";
    cin >> num1;
    cout << "Enter a number:-  ";
    cin >> num2;
    try {
        if (num1 < 0 || num2 < 0) {
            throw num1;
        }
        temp = num1;
        num1 = num2;
        num2 = temp;
        cout << "After Swapping:- " << endl;
        cout << "Number1:-  " << num1 << endl;  
        cout << "Number2:-  " << num2 << endl;
    }
    catch (int num1) {
        cout << "Number1:-  " << num1 << endl;
        cout << "Number2:-  " << num2 << endl;
    }
    return 0;
}








