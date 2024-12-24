# include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:- ";
    cin>>num;
    if (num==2){
        cout<<"Prime Number";
    }
    else if (num % 2==0){
        cout<<"Not Prime Number";
    }
   else{
        cout<<"Not A Prime Number";
         
    }
    
}