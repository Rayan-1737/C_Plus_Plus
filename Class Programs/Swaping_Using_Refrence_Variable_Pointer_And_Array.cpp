# include<iostream>
using namespace std;
void swapping(int *ptr1,int *ptr2){
    int temp = *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main(){
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    cout<<"Before Swapping: "<<endl<<"A="<<num1<<" , "<<"B="<<num2<<endl;
    swapping(&num1,&num2);
    cout<<"After Swapping:"<<endl<<"A="<<num1<<" , "<<"B="<<num2<<endl;
    return 0;
}
    

