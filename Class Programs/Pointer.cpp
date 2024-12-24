
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int &a=x;
//     cout<<"Value of x is:"<<x<<endl;
//     cout<<"value of a is:"<<a<<endl;
//     a=20;
//     cout<<"Value of x is:"<<x<<endl;
//     cout<<"value of a is:"<<a<<endl;
//     return 0;
// }

# include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 1st Number:- ";
    cin>>x;
    int y;
    cout<<"Enter 2nd Number:- ";
    cin>>y;
    int z;
    cout<<"Enter 3rd Number:- ";
    cin>>z;
    if ((x>y) || (x>z)){
        cout<<x<<" Is The Greatest Number";  
    }
    else if ((y>x) || (y>z)){
        cout<<y<<" Is The Greatest Number";
    }
    else 
    {
        cout<<z<<" Is The Greatest Number";
    }
    
}




