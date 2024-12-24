#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("Rayan Is Here");
    string str_name;
    while (!fin.eof())
    {
        getline(fin,str_name);
        cout<<str_name<<endl;
    }
    fin.close();
    return 0;
}

