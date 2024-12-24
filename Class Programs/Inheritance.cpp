# include <iostream>
using namespace std;

class demo1{
    public:
    int x;
    void getdata(){
        cout<<"Enter A Number:- ";
        cin>>x;

    }

};

class demo2:public demo1{
    public:
    void display(){
        getdata();
        cout<<"Value Of X Is : "<<x<<" ";
    }
};

int main(){
    demo2 d;
    d.display();
}