# include <iostream>
using namespace std;
class demo {
    public:
    void addition(int a , int b){ // formal parameter 
    int c = a+b;
    cout<<"Addition Is "<< c<<endl;

    } 
    void addition(int a , int b , int c){
        int z=a+b+c;
        cout<<"Addition Is " << z;
    }

};

int main(){
    demo d ;
    d.addition(10,20); // parameter Actual Parameter
    d.addition(10,20,30);

}                                                         


