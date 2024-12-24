# include<iostream>
using namespace std;
int main(){
    try{
        int age;
        cout<<"Enter your age: ";
        cin>>age;
        if (age >= 18){
            cout<<"Congratulations You Are 18 ";
            cin>>age;
        }
        else
        {
            throw "You Are Not 18";
        }
    }
    catch (const char* saal){
        cout<<saal<<" ";
    }
        

}



# include<iostream>
using namespace std;
int main(){
    try{
        int age;
        cout<<"Enter your age: ";
        cin>>age;
        if (age >= 18){
            cout<<"Congratulations You Are 18 ";
            cin>>age;
        }
        else
        {
            throw 404;
        }
    }
    catch (int saal){
        cout<<"Not 18 Sorry \n";
        cout<<"Issue: "<<saal<<" Error"<<" ";
    }
        

}





# include<iostream>
using namespace std;
int main(){
    try{
        int age;
        cout<<"Enter your age: ";
        cin>>age;
        if (age >= 18){
            cout<<"Congratulations You Are 18 ";
            cin>>age;
        }
        else
        {
            throw "sorry";
        }
    }
    catch (...){
        cout<<"Not 18 Sorry \n";
        cout<<"Issue:"<<" Error"<<" ";
    }
        

}




