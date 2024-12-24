#include<iostream>
using namespace std;
class demo{
    private:
    int num1,num2;
    public:
    demo(int a,int b){
        num1=a;
        num2=b;
    }
    int addition(){
        return num1+num2;
    }
};
int main(){
    demo dem1(10,10);
    cout<<"dem1 constructor value : "<<dem1.addition()<<endl;
    demo dem2=dem1;
    cout<<"dem2 constructor value : "<<dem2.addition()<<endl;
    return 0; 
} 






