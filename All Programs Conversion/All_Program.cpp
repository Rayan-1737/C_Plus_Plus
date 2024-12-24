//  1) Hello World 

// # include <iostream>
// using namespace std;
// void greet(){
//     cout<<"Hello World";
// }

// int main(){
//     greet();
//     greet();

// }


//  2) Addition Of Two Numbers

// # include <iostream>
// using namespace std;
// void Add(){
//     int a;
//     cout<<"Enter A Number:- ";
//     cin>>a;
//     int b;
//     cout<<"Enter A Number:- ";
//     cin>>b;

//     cout<<"Sum of two Numbers is "<<a+b<<endl;

// }
// int main(){
//     Add();
//     Add();

// }


//  3) Subtraction Of Two Numbers 

// # include <iostream>
// using namespace std;
// void Sub(){
//     int a;
//     cout<<"Enter A Number:- ";
//     cin>>a;
//     int b;
//     cout<<"Enter A Number:- ";
//     cin>>b;

//     cout<<"Subtraction of two Numbers is "<<a-b<<endl;

// }
// int main(){
//     Sub();
//     Sub();

// }


//  4) Multiplication Of Two Number 

// # include <iostream>
// using namespace std;
// void Multi(){
//     int a;
//     cout<<"Enter A Number:- ";
//     cin>>a;
//     int b;
//     cout<<"Enter A Number:- ";
//     cin>>b;

//     cout<<"Multiplication of two Numbers is "<<a*b<<endl;

// }
// int main(){
//     Multi();
//     Multi();

// }


//  5) Even Or Odd 

// # include <iostream>
// using namespace std;
// void check(){
//     int a;
//     cout<<"Enter A Number:- ";
//     cin>>a;
//     if (a%2==0){
//     cout<<"The Number Is Even";
//     }
//     else{
//         cout<<"The Number Is Odd";
//     }
// }
// int main(){
//     check();

// }


//  6) Celcius Conversion 

// # include <iostream>
// using namespace std;
// void check(){
//     int c=0;
//     cout<<"Enter the tempurature:-";
//     cin>>c;
//     cout<<"The convered degree is:-"<<((c * 1.8)+32)<<endl;
// }
// int main(){
//     check();

// }


//  7) Perimeter Of Rectrangle 

// #include <iostream>
// using namespace std;

// void check() {
//     int length, width, perimeter;
//     cout << "Enter the length of the rectangle:- ";
//     cin >> length;
//     cout << "Enter the width of the rectangle:- ";
//     cin >> width;
//     perimeter = 2 * (length + width);
//     cout << "The perimeter of the rectangle is:- " << perimeter << endl;

// }
// int main(){
//     check();
    
// }


//  8) Sum Of Multiple Variable 

// # include <iostream>
// using namespace std;
// void check (){
//     int x,y,z ;
//     cout<<"Enter a Number:-";
//     cin>>x>>y>>z;

//     int Result;
//     Result= x+y+z;
//     cout<<"The Sum Of All Numbers Entered Is "<<Result;
    
// }

// int main(){
//     check();
    
// }


//  9) Simple Intrest 

// #include <iostream> 
// using namespace std;
// void check() {
// float Principal,Rate,Time,Result;
// Principal = 12030;
// Rate = 7;
// Time = 2.5;
// Result = (Principal*Rate*Time)/100;
// cout<<"The Simple Intrest is "<<Result;
// cout<<" Rupees";
// } 

// int main(){
//     check();
    
// }


//  10) volume of sphere 

// #include <iostream> 
// using namespace std;
// void check() {
// float Radius;
// Radius = 10;
// cout<<"The Volume Of Sphere is "<<4.0/3*3.14159265 * Radius * Radius * Radius;
// }

// int main(){
//     check();
// }


//  11) Factorial

// #include <iostream>
// using namespace std;

// void check() {
//     long n, factorial = 1;
//     cout << "Enter a number:- ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }

//     cout << "Factorial of " << n << " is " << factorial << endl;
// }
// int main(){
//     check();

// }


//  12) Amstrong Number 

// #include <iostream>
// using namespace std;

// void check() {
//     int num, original, remainder, sum = 0;
//     cout<<"Enter a Number:- ";
//     cin >> num;
//     original = num;

//     while (num != 0) {
//         remainder = num % 10;
//         sum += remainder * remainder * remainder;
//         num /= 10;
//     }

//     if (sum == original)
//         cout << "Armstrong number";
//     else
//         cout << "Not an Armstrong number";


// }
// int main(){
//     check();
    
// }



//  13) Reverse Of Number 

// #include <iostream>
// using namespace std;

// void check() {
//     int num, reverse = 0, digit;
//     cout<<"Enter A Number:- ";
//     cin >> num;

//     while (num) {
//         digit = num % 10;
//         reverse = reverse * 10 + digit;
//         num = num/10;
//     }

//     cout << reverse;
    
// } 
// int main(){
//     check();
    
// }


// 14) Prime Number 

// # include<iostream>
// using namespace std;
// void check(){
//     int num;
//     cout<<"Enter a number:- ";
//     cin>>num;
//     if (num==2){
//         cout<<"Prime Number";
//     }
//     else if (num % 2==0){
//         cout<<"Not Prime Number";
//     }
//    else{
//         cout<<"Not A Prime Number";
         
//     }
    
// }

// int main(){
//     check();

// }


//  15) Grading System 

// #include <iostream>
// using namespace std;

// void check() {
//     int marks;
//     cout << "Enter your marks (1 to 100):- ";
//     cin >> marks;

//     if (marks >= 90) {
//         cout << "Grade: A" << endl;
//     } 
//     else if (marks >= 80) {
//         cout << "Grade: B \n";
//     }
//     else if (marks >= 70) {
//         cout << "Grade: C" << endl;
//     } 
//     else if (marks >= 60) {
//         cout << "Grade: D \n";
//     } 
//     else {
//         cout << "Grade: F (Fail)" << endl;
//     }

// }
// int main(){
//     check();

// }


//  16) 6 x 6 Matrix 

// #include <iostream>
// using namespace std;

// void check() {
//     int matrix[6][6];

//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             matrix[i][j] = (i + 1) * (j + 1); // Fill the matrix with values
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }

    
// }
// int main(){
//     check();
    
// }


//  17)  Sum OF Enterd Number 

// #include <iostream>
// using namespace std;

// void check() {
//     int num, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0) {
//         sum += num % 10; // Extract the last digit and add it to sum
//         num /= 10;       // Remove the last digit
//     }

//     cout << "Sum of the digits: " << sum << endl;
    
// }
// int main(){
//     check();
// }



//  18)  Leap Year

// #include <iostream>
// using namespace std;

// void check() {
//     int year;
//     cout << "Enter a year:- ";
//     cin >> year;

//     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//         cout << year << " is a Leap Year.";
//     else
//         cout << year << " is Not a Leap Year.";

// }
// int main(){
//     check();

// }


//  19)  Biggest Number 

// #include <iostream>
// using namespace std;

// void check() {
//     int a, b, c;
//     cout << "Enter three numbers:- ";
//     cin >> a >> b >> c;

//     int largest;
//     if (a >= b && a >= c) {
//         largest = a;
//     } else if (b >= c) {
//         largest = b;
//     } else {
//         largest = c;
//     }

//     cout << "The largest number is:- " << largest;

// }

// int main(){
//     check();

// }


#include<iostream>
#include<math.h>
using namespace std;
// 
//1
int hellowrld(){
    cout<<"Hello World!"<<endl;
    return 0;
}

//2
int swapwithout()
{
    int x=10,y=3;
    cout<<"x is:"<<x<<endl<<"y is:"<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After swap\n"<<"x is:"<<x<<endl<<"y is:"<<y<<endl;
    return 0;
}

//3
int swapwith()
{
    int x=10,y=3,temp;
    cout<<"x is:"<<x<<endl<<"y is:"<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swap\n"<<"x is:"<<x<<endl<<"y is:"<<y<<endl;
    return 0;
}

//4
int add(){
    int a=5,b=7,sum;
    sum=a+b;
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}

//5
int multi(){
    int n1=6,n2=2,mult;
    mult=n1*n2;
    cout<<"Product is: "<<mult<<endl;
    return 0;
}

//6
int calc(){
    float a,b;
    char c;
    cout<<"Enter type of Calculation (+,-,*,/) : ";
    cin>>c;
    cout<<"\nEnter The Two numbers to calculate: ";
    cin>>a>>b;
    switch(c){
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
        default: cout<<"Operator should be valid - (+,-,*,/)\n Try Again!"<<endl;
    }
    return 0;
}

//7
int evenodd()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number is even"<<endl;

    }
    else 
    {
        cout<<"The number is odd"<<endl;
    }
    return 0;
}

//8
int temperature()
{
    int f,c;
    cout<<"Enter the celsius temp: ";
    cin>>c;
    f=c*1.8 + 32;
    cout<<"fahrenheit temp is: "<<f<<endl;
    return 0;
}

//9
int areacirc()
{
    int radi;
    float res,pi=3.14;
    cout<<"Enter Radius of circle: ";
    cin>>radi;
    res=radi*radi*pi;
    cout<<"Area of circle is : "<<res<<endl;
    return 0;
}

//10
int numreverse()
{
    int a,n;
    cout<<"Enter the number to reverse";
    cin>>a;
    while(a!=0)
    {
        n=a%10;
        a=a/10;
        cout<<n<<endl;
    }
    return 0;
}

//11
int interest()
{
    int p,n,r,i;
    cout<<"enter principal,no.of year and rate in percent: ";
    cin>>p>>n>>r;
    i=(p*n*r)/100;
    cout<<i<<endl;
    return 0;
}

//12
int grading()
{
    int grade;
    cout<<"Enter your grade in 1-100 %: ";
    cin>>grade;
    switch (grade/10){
        case 10: cout<<"A Grade"<<endl;
        break;
        case 9: cout<<"A Grade"<<endl;
        break;
        case 8: cout<<"B Grade"<<endl;
        break;
        case 7: cout<<"C Grade"<<endl;
        break;
        case 6: cout<<"D Grade"<<endl;
        break;
        default: cout<<"F-Failed"<<endl;
    }
    return 0;
}

//13
int factorial(){
    long int fac;
    cout<<"Enter the number of which you need factorial: ";
    cin>>fac;
    for(int i=fac-1;i>=1;i--){
        fac=fac*i;
    }
    cout<<"Factorial is: "<<fac<<endl;
    return 0;
}

//14
int primeno(){
    int prime,count;
    cout<<"Enter the number to check: ";
    cin>>prime;
    count=0;
    for(int i=2;i<sqrt(prime);i++){
        if (prime%i==0){
            count+=1;
            cout<<"The number is not prime"<<endl;
            break;
        }
        cout<<i<<"\n";
    }
    if (count==0)
        cout<<"The number is prime"<<endl;
    
    return 0;
}

//15
int plusminus()
{
    int var;
    cout<<"Enter an integer : ";
    cin>>var;
    if(var>0)
    {
        cout<<"The integer is positive"<<endl;
    }
    else if (var==0)
    {
        cout<<"The integer is 0"<<endl;
    }
    else 
    {
        cout<<"The integer is negative"<<endl;
    }
    return 0;
}

//16
int weekdays()
{
    int daynum;
    cout<<"Enter the number to find the day: ";
    cin>>daynum;
    switch (daynum){
        case 1: cout<<"Monday"<<endl;
        break;
        case 2: cout<<"Tuesday"<<endl;
        break;
        case 3: cout<<"Wednesday"<<endl;
        break;
        case 4: cout<<"Thursday"<<endl;
        break;
        case 5: cout<<"Friday"<<endl;
        break;
        case 6: cout<<"Saturday"<<endl;
        break;
        case 7: cout<<"Sunday"<<endl;
        break;
        default: cout<<"Number should be between 1 and 7!"<<endl;
    }
    return 0;
}

//17
int armstrong(){
    int arm,temp,n,check=0,power;
    cout<<"Enter a number to check armstrong : ";
    cin>>arm;
    temp=arm;
    string s = to_string(temp);
    power=s.length();
    temp=arm;
    while (temp!=0)
    {
        n=temp%10;
        check+=pow(n,power);
        temp=temp/10;
    }
    cout<<check;
    if (check==arm)
    {
        cout<<"\nArmstrong\n";
    }
    else{
        cout<<"\nNot Armstrong\n";
    }
    return 0;
}

//18
int greatestnum()
{
    int a,b,c;
    cout<<"Enter three numbers (A,B,C): ";
    cin>>a>>b>>c;
    if (a>b and a>c){
        cout<<"A is the greatest number"<<endl;
    }
    else if (b>a and b>c){
        cout<<"B is the greatest number"<<endl;
    }
    else {
        cout<<"C is the greatest number"<<endl;
    }
    return 0;
}

//19
int leapyear()
{
    int year;
    cout<<"Enter the year :";
    cin>>year;
    if(year%4==0){
        cout<<year<<" is a leap year"<<endl;
    }
    else{
        cout<<year<<" is not a leap year"<<endl;
    }
    return 0;
}

//20
int twobytwo()
{
    int a[2][2]={{2,35},{3,4}};
        cout<<a[0][0]<<endl;
        cout<<a[0][1]<<endl;
        cout<<a[1][0]<<endl;
        cout<<a[1][1]<<endl;
    return 0;
}

//21
int threebythree()
{
    int a[3][3]={{2,35,3},{3,4,5},{5,6,7}};
        cout<<a[0][0]<<endl;
        cout<<a[0][1]<<endl;
        cout<<a[0][2]<<endl;
        cout<<a[1][0]<<endl;
        cout<<a[1][1]<<endl;
        cout<<a[1][2]<<endl;
        cout<<a[2][0]<<endl;
        cout<<a[2][1]<<endl;
        cout<<a[2][2]<<endl;
    return 0;
}

//22
int sixbysix() {
    int matrix[6][6];
    for (int i = 0; i < 36; i++) {
        int row = i / 6;
        int col = i % 6;
        matrix[row][col] = i + 1;
        cout << matrix[row][col] << "\t";
        if (col == 5) cout << endl;
    }
    return 0;
}

//23
int onebyone(){
    int onedi[5]={1,2,3,4,5};
    cout<<onedi[0]<<endl;
    cout<<onedi[1]<<endl;
    cout<<onedi[2]<<endl;
    cout<<onedi[3]<<endl;
    cout<<onedi[4]<<endl;
    return 0;
}

//24
int starpyramid(int rows){
    for (int i=1; i<=rows;i++) {
        for (int j=1; j<=rows-i;j++) {
            cout<< " ";
        }
        for (int j=1;j<=(2*i-1);j++) {
            cout<< "*";
        }
        cout << endl;
    }
    return 0;
}

//25
int arearect()
{
    int s1,s2,p;
    cout<<"Enter Sides of rectangle: ";
    cin>>s1>>s2;
    p=2*(s1+s2);
    cout<<"Perimeter of rectangle is : "<<p<<endl;
    return 0;
}

//26
int showw(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Your number is : "<<x<<endl;
    return 0;
}

//27
int stringfunct() {
    string str = "Be yourself.";
    cout << "Original string: " << str << endl;
    str.append(" - Oscar Wilde");
    cout << "After append: " << str << endl;
    str.replace(0, 2, "Always");
    cout << "After replace: " << str << endl;
    cout << "Length of string: " << str.length() << endl;
    cout << "Substring (0-5): " << str.substr(0, 5) << endl;
    cout << "Finding 'yourself': " << str.find("yourself") << endl;
    return 0;
}

//28
int stringinc() {
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
    return 0;
}

//29
int sumofdigit(){
    int num,sum=0,n=0;
    cout<<"Enter the number to add its digits : ";
    cin>>num;
    while(num!=0)
    {
        n=num%10;
        sum+=n;
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}

//MAIN
int main() {
    hellowrld();
    swapwithout();
    swapwith();
    add();
    multi();
    calc();
    evenodd();
    temperature();
    areacirc();
    numreverse();
    interest();
    grading();
    factorial();
    primeno();
    plusminus();
    weekdays();
    armstrong();
    greatestnum();
    leapyear();
    twobytwo();
    threebythree();
    sixbysix();
    onebyone();
    starpyramid(5);
    arearect();
    showw();
    stringfunct();
    stringinc();
    sumofdigit();
    return 0;
}


