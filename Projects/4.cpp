#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b){
        cout<<"a is greater than b";
    }
    else{
        cout<<"b is greater than a";
    }
    return 0;


}
int main(){
    max(2,3);

}