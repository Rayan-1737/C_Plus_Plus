# include<iostream>
using namespace std;

class car{
public:
string brand;
string model;
int price;
int seats;

car(string b,string m,int p,int s){
    brand=b;
    model=m;
    price=p;
    seats=s;

}
};

int main(){
    car spec("BMW","X5",100000000,6);

    cout<<"Name:- "<<spec.brand<<endl;
    cout<<"Model:- "<<spec.model<<endl;
    cout<<"Price:- "<<spec.price<<endl;
    cout<<"Seats:- "<<spec.seats<<endl;

    return 0;

}          

