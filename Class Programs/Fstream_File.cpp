// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream myfile("demo.txt",ios::out);
//     if(!myfile){
//         cout<<"Failed to open the file for append ! "<<endl;
//         return 0;
//     }
//     myfile<<"Rayan "<<endl;
//     myfile<<"Is "<<endl;
//     myfile<<"Here "<<endl;
//     myfile.close();
//     return 0;
// }     



#include <iostream>
#include<fstream>
using namespace std;
int main(){
    fstream my_file("Rayan.txt",ios::out);
    if(!my_file){
        cout<<"failed to open your file"<<endl;
        return 0;

    }
    my_file<<"line 69"<<endl;
    my_file<<"line 69"<<endl;
    my_file<<"line 69"<<endl;
    my_file.close();
    return 0;

}


