# include<iostream>
using namespace std;

int main(){
    try
    {
    int a;
    int b;
    cout<<"Enter a  : ";
    cin>>a;
    cout<<"Enter b  : ";
    cin>>b;
    if (b==0)
    {
        throw 404;
    }
    int c=a/b;
    cout<<c;
    }
    catch(int num)
    {
        cout<<"Error Found : "<<num<<endl;
        cout<<"Cant divide by 0 "<<endl;
    }
    return 0;
}

