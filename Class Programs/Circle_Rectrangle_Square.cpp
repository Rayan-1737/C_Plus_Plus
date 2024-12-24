#include<iostream>
using namespace std;
class circle{
    public:
    int rad;
    float pi = 3.14;
    void areacirc(){
        cout<<"Area of circle is :- "<<rad*rad*pi<<endl;
    }
    void pericirc(){
        cout<<"perimeter of circle is :- "<<rad*pi*2<<endl;
    } 
};                   
class rect{
    public: 
    int l,b;
    void arearect(){
        cout<<"Area of rectangle is :- "<<l*b<<endl;
    }
    void perirect(){
        cout<<"Area of rectangle is :- "<<l*b<<endl;
    }
};
class squ{
    public:
    int side;
    void areasqu(){
        cout<<"Area of square is :- "<<side*side<<endl;
    }
    void perisqu(){
        cout<<"Area of square is :- "<<4*side<<endl;
    }
};
class display: public circle,public squ,public rect{
    public:
    void getcirc(){
        cout<<"\nEnter radius :- ";
        cin>>rad;
    }
    void getsqu(){
        cout<<"\nEnter side of square :- ";
        cin>>side;
    }
    void getrect(){
        cout<<"\nEnter length and breadth of rectangle :- ";
        cin>>l>>b;
    }
};
int main(){
    display d;
    d.getcirc();
    d.getsqu();
    d.getrect();
    d.areacirc();
    d.pericirc();

}