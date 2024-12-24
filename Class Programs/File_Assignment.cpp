#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myfile("demo2.txt",ios::out);
    if(!myfile){
        cout<<"Failed to open the file for append ! "<<endl;
    }
    myfile<<"1"<<endl;
    myfile<<"2"<<endl;
    myfile<<"3"<<endl;
    myfile.close();

    fstream myfi("demo2.txt",ios::in);
    if(!myfi){
        cout<<"Failed to open the file for append ! "<<endl;
    }
    string str_name;
    while (!myfi.eof())
    {
        getline(myfi,str_name);
        cout<<str_name<<endl;
    }
    myfi.close();
    return 0;
}


