# include<iostream>
using namespace std;
class demo{
    public:
    demo()
    {
        cout<<"Calling Constructor\n";
    }
    ~demo()
    {
        cout<<"Calling Destructor\n";

    }
};
int main(){
    cout<<"Entry Scope\n";
    demo d;
    demo d2;
    cout<<"Exit Scope"<<endl;
    return 0;

}



