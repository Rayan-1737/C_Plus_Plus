# include<iostream>
using namespace std;
void callbyvalue(int a){
    int c = a+10;
    cout<<"Value Of A: "<<c;
}
int main(){
    int x =10;
    callbyvalue(x);
    cout<<x;
    

}