# include<iostream>
using namespace std;
class AboutMe{
    public:
    string name;
    float age;
    int roll;
    string college;

};
int main(){
    AboutMe info; //  Single Object 

    info.name="Rayan";
    info.age=18;
    info.roll=141;
    info.college="ITM Skills University";
     

    cout<<info.name<<endl;
    cout<<info.age<<endl;
    cout<<info.roll<<endl;
    cout<<info.college<<endl;


    cout<<"---------------------------------------------- \n"; 
    //  "Multiple Objects" Starts Frome Here 
    
    AboutMe details;  // It Is An Multiple Object 

    details.name="XYZ";
    details.age=18.3;
    details.roll=123;
    details.college="School Of Future Tech"; 


    cout<<details.name<<endl;
    cout<<details.age<<endl;
    cout<<details.roll<<endl;
    cout<<details.college<<endl;
     

    return 0;


}
