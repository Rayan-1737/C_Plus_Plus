//  1) Factorial 

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1; 
    return n * factorial(n - 1); 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}


//  2) Palindrome 

#include <iostream>
using namespace std;

bool isPalindromeHelper(int num, int &temp) {
    if (num == 0)
        return true;

    if (isPalindromeHelper(num / 10, temp)) {
        if (num % 10 == temp % 10) {
            temp /= 10;
            return true;
        }
    }
    return false;
}

bool isPalindrome(int num) {
    int temp = num;
    return isPalindromeHelper(num, temp);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome" << endl;
    else
        cout << num << " is not a Palindrome" << endl;

    return 0;
}



//  3) Amstrong Number 

#include <iostream>
using namespace std;


int sumOfPowers(int num, int power) {
    if (num == 0)
        return 0;
    int digit = num % 10;
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= digit;
    }
    return product + sumOfPowers(num / 10, power);
}

bool isArmstrong(int num) {
    int temp = num, count = 0;
    while (temp > 0) {
        count++;
        temp /= 10; 
    }
    return num == sumOfPowers(num, count);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number" << endl;
    else
        cout << num << " is not an Armstrong number" << endl;

    return 0;
}




//  4) Reverse Number 


#include <iostream>
using namespace std;

int reverseNumber(int num, int rev = 0) {
    if (num == 0)
        return rev; 
    return reverseNumber(num / 10, rev * 10 + (num % 10)); 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number is " << reverseNumber(num) << endl;
    return 0;
}




//  5) Fibonacci Series


#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0; 
    if (n == 1)
        return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
}

int main() {
    int num;
    cout << "Enter the position (n): ";
    cin >> num;
    cout << "Fibonacci number at position " << num << " is " << fibonacci(num) << endl;
    return 0;
}

