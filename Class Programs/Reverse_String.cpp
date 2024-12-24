# include<iostream>
# include <string>
using namespace std;
int main()
{
    string s=" ";
    cout<<"enter the string:- ";
    cin>>s;
    for (int i=s.length()-1;i>=0;i--)
    {
        cout<<s[i];
    }
}


