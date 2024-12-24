# include<iostream>
# include<fstream>
using namespace std;
int main(){
    ofstream fout("Coustomer");
    string str_name="Rayan";
    fout<<str_name;
    fout.close();
    return  0;


}
