
// Function inside Function 

# include<iostream>
using namespace std;
void rayan(){
    cout<<"Hello Rayan \n";
    cout<<"How Are You??"<<endl;
    
}
void rawat(){
    cout<<"I Hope You Will Be Fine"<<endl;
    cout<<"If Not Be Fine";
    rayan();  // It will use "rayan" function  "cout" here . So rayan function everything will be here 
}

int main(){
    rawat();// everything will be printed here since rayan function is defined inside it will print rayan function cout also. 

} 


