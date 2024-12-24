#include<iostream>
#include<math.h>
using namespace std;

class AllPrograms
{
public:
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
        cout<<"Enter the number to reverse: ";
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
    int perirect()
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
};

int main(){
    AllPrograms r;
    r.hellowrld();
    r.swapwithout();
    r.swapwith();
    r.add();
    r.multi();
    r.calc();
    r.evenodd();
    r.temperature();
    r.areacirc();
    r.numreverse();
    r.interest();
    r.grading();
    r.factorial();
    r.primeno();
    r.plusminus();
    r.weekdays();
    r.armstrong();
    r.greatestnum();
    r.leapyear();
    r.twobytwo();
    r.threebythree();
    r.sixbysix();
    r.onebyone();
    r.starpyramid(5);
    r.perirect();
    r.showw();
    r.stringfunct();
    r.stringinc();
    r.sumofdigit();
    return 0;
}


