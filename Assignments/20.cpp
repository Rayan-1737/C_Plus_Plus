/*Create a class called Max. Calculate the greatest among three numbers using
the else if ladder. using user input and namespace std*/

#include <iostream>
using namespace std;
class Max{
    public:
    void max(){
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
    }
};
int main(){
    Max obj;
    obj.max();
    return 0;
}