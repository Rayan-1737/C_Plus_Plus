# include <iostream>
using namespace std;
int main (){
    int x = 5, y = 10;
    cout<<"X is " << x<<endl;
    cout<<"y is "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"X is After Swaping "<<x<<endl;
    cout<<"Y is After Swaping "<<y<<endl;

}