// Using Int 

// # include<iostream>
// using namespace std;
// int main(){
//     int *arr=new int[3];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;

//     cout<<"Value Of Array arr[0] Is "<<arr[0]<<endl;
//     cout<<"Value Of Array arr[1] Is "<<arr[1]<<endl;
//     cout<<"Value Of Array arr[2] Is "<<arr[2]<<endl;
  
//     cout<<"--------------------------------------------"<<endl;
    
//     delete[]arr;
//     cout<<"Value Of Array arr[0] Is "<<arr[0]<<endl;
//     cout<<"Value Of Array arr[1] Is "<<arr[1]<<endl;
//     cout<<"Value Of Array arr[2] Is "<<arr[2]<<endl;

// }



// Using String 



# include<iostream>
using namespace std;
int main(){
    string *arr=new string[3];
    arr[0]="Hello";
    arr[1]="Rayan";
    arr[2]="Hii";
    cout<<"Value Of Array arr[0] Is "<<arr[0]<<endl;
    cout<<"Value Of Array arr[1] Is "<<arr[1]<<endl;
    cout<<"Value Of Array arr[2] Is "<<arr[2]<<endl;
  
    cout<<"--------------------------------------------"<<endl;
    
    delete[]arr;
    cout<<"Value Of Array arr[0] Is "<<arr[0]<<endl;
    cout<<"Value Of Array arr[1] Is "<<arr[1]<<endl;
    cout<<"Value Of Array arr[2] Is "<<arr[2]<<endl;

}
