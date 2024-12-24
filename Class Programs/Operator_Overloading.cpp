#include<iostream>
using namespace std;
class demo{
    public:
    int num;
    demo(int a){
        num=a;
        display();
    }
    demo operator ++(){
        // num +=1;
        return num+1;
    }
    void display(){
        cout<<"Value of num is : "<<num<<endl;
    }
};
int main(){
    ++demo(10);
}
