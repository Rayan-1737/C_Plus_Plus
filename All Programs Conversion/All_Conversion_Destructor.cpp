#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// 1. Hello World

class HelloWorld {
public:
    HelloWorld() {
        cout << "Hello, World!" << endl;
    }
};

// 2. Swap without using a temporary variable

class SwapWithoutTemp {
public:
    SwapWithoutTemp() {
        int a = 15, b = 5;
        cout << "Before Swap -> a: " << a << ", b: " << b << endl;
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "After Swap -> a: " << a << ", b: " << b << endl;
    }
};

// 3. Swap using a temporary variable

class SwapWithTemp {
public:
    SwapWithTemp() {
        int p = 8, q = 12, temp;
        cout << "Before Swap -> p: " << p << ", q: " << q << endl;
        temp = p;
        p = q;
        q = temp;
        cout << "After Swap -> p: " << p << ", q: " << q << endl;
    }
};

// 4. Addition

class Addition {
public:
    Addition() {
        int num1 = 10, num2 = 20, result;
        result = num1 + num2;
        cout << "Sum is: " << result << endl;
    }
};

// 5. Multiplication

class Multiplication {
public:
    Multiplication() {
        int x = 7, y = 3, product;
        product = x * y;
        cout << "Product is: " << product << endl;
    }
};

// 6. Simple Calculator

class Calculator {
public:
    Calculator() {
        float num1, num2;
        char operation;
        cout << "Enter operation (+,-,*,/): ";
        cin >> operation;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        switch (operation) {
            case '+': cout << "Result: " << num1 + num2 << endl; break;
            case '-': cout << "Result: " << num1 - num2 << endl; break;
            case '*': cout << "Result: " << num1 * num2 << endl; break;
            case '/': cout << "Result: " << num1 / num2 << endl; break;
            default: cout << "Invalid operation!" << endl;
        }
    }
};

// 7. Even or Odd

class EvenOdd {
public:
    EvenOdd() {
        int input;
        cout << "Enter a number: ";
        cin >> input;
        if (input % 2 == 0) {
            cout << input << " is even." << endl;
        } else {
            cout << input << " is odd." << endl;
        }
    }
};

// 8. Temperature Conversion

class Temperature {
public:
    Temperature() {
        int celsius;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        float fahrenheit = celsius * 1.8 + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

// 9. Area of Circle

class AreaOfCircle {
public:
    AreaOfCircle() {
        int radius;
        float area, pi = 3.14;
        cout << "Enter the radius: ";
        cin >> radius;
        area = pi * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// 10. Reverse a Number

class ReverseNumber {
public:
    ReverseNumber() {
        int number, remainder;
        cout << "Enter a number: ";
        cin >> number;
        cout << "Reversed Number: ";
        while (number != 0) {
            remainder = number % 10;
            cout << remainder;
            number /= 10;
        }
        cout << endl;
    }
};

// 11. Simple Interest

class Interest {
public:
    Interest() {
        int principal, time, rate;
        cout << "Enter principal, time, and rate: ";
        cin >> principal >> time >> rate;
        float si = (principal * time * rate) / 100.0;
        cout << "Simple Interest: " << si << endl;
    }
};

// 12. Grading System

class Grading {
public:
    Grading() {
        int marks;
        cout << "Enter marks: ";
        cin >> marks;
        switch (marks / 10) {
            case 10:
            case 9: cout << "Grade: A" << endl; break;
            case 8: cout << "Grade: B" << endl; break;
            case 7: cout << "Grade: C" << endl; break;
            case 6: cout << "Grade: D" << endl; break;
            default: cout << "Grade: F" << endl;
        }
    }
};

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// Class definitions without destructors

class Factorial {
public:
    Factorial() {
        long int fac;
        cout << "Enter the number of which you need factorial: ";
        cin >> fac;
        for (int i = fac - 1; i >= 1; i--) {
            fac = fac * i;
        }
        cout << "Factorial is: " << fac << endl;
    }
};

class PrimeNumber {
public:
    PrimeNumber() {
        int prime, count = 0;
        cout << "Enter the number to check: ";
        cin >> prime;
        for (int i = 2; i < sqrt(prime); i++) {
            if (prime % i == 0) {
                count++;
                cout << "The number is not prime" << endl;
                break;
            }
        }
        if (count == 0)
            cout << "The number is prime" << endl;
    }
};

class PlusMinus {
public:
    PlusMinus() {
        int var;
        cout << "Enter an integer: ";
        cin >> var;
        if (var > 0) {
            cout << "The integer is positive" << endl;
        } else if (var == 0) {
            cout << "The integer is 0" << endl;
        } else {
            cout << "The integer is negative" << endl;
        }
    }
};

class Weekdays {
public:
    Weekdays() {
        int daynum;
        cout << "Enter the number to find the day: ";
        cin >> daynum;
        switch (daynum) {
            case 1: cout << "Monday" << endl; break;
            case 2: cout << "Tuesday" << endl; break;
            case 3: cout << "Wednesday" << endl; break;
            case 4: cout << "Thursday" << endl; break;
            case 5: cout << "Friday" << endl; break;
            case 6: cout << "Saturday" << endl; break;
            case 7: cout << "Sunday" << endl; break;
            default: cout << "Number should be between 1 and 7!" << endl;
        }
    }
};

class Armstrong {
public:
    Armstrong() {
        int arm, temp, n, check = 0, power;
        cout << "Enter a number to check Armstrong: ";
        cin >> arm;
        temp = arm;
        string s = to_string(temp);
        power = s.length();
        while (temp != 0) {
            n = temp % 10;
            check += pow(n, power);
            temp /= 10;
        }
        if (check == arm)
            cout << "Armstrong" << endl;
        else
            cout << "Not Armstrong" << endl;
    }
};

class GreatestNumber {
public:
    GreatestNumber() {
        int a, b, c;
        cout << "Enter three numbers (A, B, C): ";
        cin >> a >> b >> c;
        if (a > b && a > c)
            cout << "A is the greatest number" << endl;
        else if (b > a && b > c)
            cout << "B is the greatest number" << endl;
        else
            cout << "C is the greatest number" << endl;
    }
};

class LeapYear {
public:
    LeapYear() {
        int year;
        cout << "Enter the year: ";
        cin >> year;
        if (year % 4 == 0)
            cout << year << " is a leap year" << endl;
        else
            cout << year << " is not a leap year" << endl;
    }
};

class TwoByTwoMatrix {
public:
    TwoByTwoMatrix() {
        int a[2][2] = {{2, 35}, {3, 4}};
        cout << a[0][0] << endl;
        cout << a[0][1] << endl;
        cout << a[1][0] << endl;
        cout << a[1][1] << endl;
    }
};

class ThreeByThreeMatrix {
public:
    ThreeByThreeMatrix() {
        int a[3][3] = {{2, 35, 3}, {3, 4, 5}, {5, 6, 7}};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class SixBySixMatrix {
public:
    SixBySixMatrix() {
        int matrix[6][6];
        for (int i = 0; i < 36; i++) {
            int row = i / 6;
            int col = i % 6;
            matrix[row][col] = i + 1;
            cout << matrix[row][col] << "\t";
            if (col == 5) cout << endl;
        }
    }
};

class OneDimensionalArray {
public:
    OneDimensionalArray() {
        int onedi[5] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++) {
            cout << onedi[i] << endl;
        }
    }
};

class StarPyramid {
public:
    StarPyramid(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= rows - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

class PerimeterRectangle {
public:
    PerimeterRectangle() {
        int s1, s2, p;
        cout << "Enter sides of rectangle: ";
        cin >> s1 >> s2;
        p = 2 * (s1 + s2);
        cout << "Perimeter of rectangle is: " << p << endl;
    }
};

class ShowNumber {
public:
    ShowNumber() {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        cout << "Your number is: " << x << endl;
    }
};

class StringOperations {
public:
    StringOperations() {
        string str = "Be yourself.";
        cout << "Original string: " << str << endl;
        str.append(" - Oscar Wilde");
        cout << "After append: " << str << endl;
        str.replace(0, 2, "Always");
        cout << "After replace: " << str << endl;
        cout << "Length of string: " << str.length() << endl;
        cout << "Substring (0-5): " << str.substr(0, 5) << endl;
        cout << "Finding 'yourself': " << str.find("yourself") << endl;
    }
};

class CStringOperations {
public:
    CStringOperations() {
        char str1[50] = "Hello, ";
        char str2[50] = "World!";
        char str3[50];
        printf("Length of str1: %lu\n", strlen(str1));
        strcpy(str3, str1);
        printf("After copying, str3: %s\n", str3);
        strcat(str1, str2);
        printf("After concatenation, str1: %s\n", str1);
        int result = strcmp(str1, str3);
        if (result == 0) {
            printf("str1 and str3 are equal.\n");
        } else {
            printf("str1 and str3 are not equal.\n");
        }
    }
};

class SumOfDigits {
public:
    SumOfDigits() {
        int num, sum = 0, n;
        cout << "Enter the number to add its digits: ";
        cin >> num;
        while (num != 0) {
            n = num % 10;
            sum += n;
            num /= 10;
        }
        cout << sum << endl;
    }
};

int main() {
    Factorial fact;
    PrimeNumber prime;
    PlusMinus pm;
    Weekdays wd;
    Armstrong armstrong;
    GreatestNumber greatestNum;
    LeapYear leap;
    TwoByTwoMatrix twoByTwo;
    ThreeByThreeMatrix threeByThree;
    SixBySixMatrix sixBySix;
    OneDimensionalArray oneByOne;
    StarPyramid starPyramid(3);
    PerimeterRectangle perimeter;
    ShowNumber showNum;
    StringOperations strOps;
    CStringOperations cStrOps;
    SumOfDigits sumDigits; 
}
