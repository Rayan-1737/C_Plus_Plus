# include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"Base Class"<<endl;
    }

};

class derived:public base{
    public:
    void display(){
        cout<<"Derived Class"<<endl;

    }
};

int main(){
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->display();
    obj.display();
    // obj.base::display();
}