#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myfile("Rayan.txt",ios::in);
    if(!myfile){
        cout<<"Failed to open the file for append ! "<<endl;
        return 0;
    }
    string str_name;
    while (!myfile.eof())
    {
        getline(myfile,str_name);
        cout<<str_name<<endl;
    }
    myfile.close();
    return 0;
}