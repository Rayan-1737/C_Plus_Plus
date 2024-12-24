#include<iostream>
#include<fstream>
using namespace std;
class rectangle{
private:
       int l;
       int width,length;

public:
    rectangle(){
        length=2;
        width=6;

    }
    int area(){
        int s;
        s=width*length;
        cout<<"the are if the rectangle is:"<<s;
        return 0;
    }
       
        
        
        
};
int main(){
    rectangle r;
    r.area();
}