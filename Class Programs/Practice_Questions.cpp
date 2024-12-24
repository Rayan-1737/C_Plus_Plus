# include<iostream>
using namespace std;
string num(string val){
    return val;
}
int main(){
    string input;
    cout<<"Enter A String:- ";
    cin>>input;
    cout<<"The String: "<<num(input);
    return 0;


}