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

class getsquare:public demo1{
    public:
    int square;
    void makesquare(){
    square = x*x;

    }
        
};

class demo2:public getsquare{
    public:
    void program(){
    getdata();
    makesquare();
    cout<<"Square Of " <<x<< " Is "<<square<<endl; 
}
};


int main(){
    demo2 d;
    d.program();
    return 0;
} 