#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

// 1. Hello World

class HelloWorld {
public:
    HelloWorld() {
        cout << "Hello World!" << endl;
    }
};

// 2. Swap without using a temporary variable

class SwapWithoutTemp {
public:
    SwapWithoutTemp() {
        int x = 10, y = 3;
        cout << "x is: " << x << endl << "y is: " << y << endl;
        x = x + y;
        y = x - y;
        x = x - y;
        cout << "After swap\nx is: " << x << "\ny is: " << y << endl;
    }
};

// 3. Swap with using a temporary variable

class SwapWithTemp {
public:
    SwapWithTemp() {
        int x = 10, y = 3, temp; 
        cout << "x is: " << x << endl << "y is: " << y << endl;
        temp = x;
        x = y;
        y = temp;
        cout << "After swap\nx is: " << x << "\ny is: " << y << endl;
    }
};

// 4. Addition

class Addition {
public:
    Addition() {
        int a = 5, b = 7, sum;
        sum = a + b;
        cout << "Sum is: " << sum << endl;

    }
};

// 5. Multiplication

class Multiplication {
public:
    Multiplication() {
        int n1 = 6, n2 = 2, mult;
        mult = n1 * n2;
        cout << "Product is: " << mult << endl;
    }
};

// 6. Simple Calculator

class Calculator {
public:
    Calculator() {
        float a, b;
        char c;
        cout << "Enter type of Calculation (+,-,*,/) : ";
        cin >> c;
        cout << "\nEnter The Two numbers to calculate: ";
        cin >> a >> b;
        switch (c) {
            case '+': cout << a + b << endl;
                break;
            case '-': cout << a - b << endl;
                break;
            case '*': cout << a * b << endl;
                break;
            case '/': cout << a / b << endl;
                break;
            default: cout << "Operator should be valid - (+,-,*,/)\n Try Again!" << endl;
        }
    }
};

// 7. Even or Odd

class EvenOdd {
public:
    EvenOdd() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0) {
            cout << "The number is even" << endl;
        } else {
            cout << "The number is odd" << endl;
        }
    }
};

// 8. Temperature Conversion

class Temperature {
public:
    Temperature() {
        int f, c;
        cout << "Enter the celsius temp: ";
        cin >> c;
        f = c * 1.8 + 32;
        cout << "Fahrenheit temp is: " << f << endl;
        
    }
};

// 9. Area of Circle

class AreaOfCircle {
public:
    AreaOfCircle() {
        int radi;
        float res, pi = 3.14;
        cout << "Enter Radius of circle: ";
        cin >> radi;
        res = radi * radi * pi;
        cout << "Area of circle is : " << res << endl;
        
    }
};

// 10. Reverse a number

class ReverseNumber {
public:
    ReverseNumber() {
        int a, n;
        cout << "Enter the number to reverse: ";
        cin >> a;
        while (a != 0) {
            n = a % 10;
            a = a / 10;
            cout << n;
        }
        cout << endl;
        
    }
};

// 11. Simple Interest

class Interest {
public:
    Interest() {
        int p, n, r, i;
        cout << "Enter principal, number of years, and rate in percent: ";
        cin >> p >> n >> r;
        i = (p * n * r) / 100;
        cout << "Simple Interest is: " << i << endl;
        
    }
};

// 12. Grading System

class Grading {
public:
    Grading() {
        int grade;
        cout << "Enter your grade in 1-100 %: ";
        cin >> grade;
        switch (grade / 10) {
            case 10:
            case 9:
                cout << "A Grade" << endl;
                break;
            case 8:
                cout << "B Grade" << endl;
                break;
            case 7:
                cout << "C Grade" << endl;
                break;
            case 6:
                cout << "D Grade" << endl;
                break;
            default:
                cout << "F-Failed" << endl;
        }
        
    }
};

// 13. Factorial

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

// 14. Prime Number Check

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

// 15. Positive, Negative or Zero

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

// 16. Day of the Week

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

// 17. Armstrong Number

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

// 18. Greatest Number

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

// 19. Leap Year

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

// 20. Two by Two Matrix

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

// 21. Three by Three Matrix

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

// 22. Six by Six Matrix

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

// 23. One Dimensional Array

class OneDimensionalArray {
public:
    OneDimensionalArray() {
        int onedi[5] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++) {
            cout << onedi[i] << endl;
        }
        
    }
};

// 24. Star Pyramid

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

// 25. Perimeter of Rectangle

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

// 26. Show Number

class ShowNumber {
public:
    ShowNumber() {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        cout << "Your number is: " << x << endl;
        
    }
};

// 27. String Operations

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

// 28. String Operations with C-Strings

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

// 29. Sum of Digits

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
    HelloWorld hw;
    SwapWithoutTemp swt;
    SwapWithTemp sw;
    Addition add;
    Multiplication mul;
    Calculator calc;
    EvenOdd eo;
    Temperature temp;
    AreaOfCircle ac;
    ReverseNumber rn;
    Interest interest;
    Grading grading;
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

