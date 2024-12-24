#include<iostream>
using namespace std;
template <class t1>
class square{
    public:
    t1 a;
    square(t1 b){
    a=b*b }
    void display(){
        cout<<a;
    }
};
int main(){
    square<int> d(6);
    d.display();
} 



#include<iostream>
using namespace std;
template <class t1>
class square{
    public:
    t1 a;
    square(t1 b){
        a=b*b;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    square<int> d(6);
    d.display();
}



// #include <iostream>
// using namespace std;
// template<class t1,class t2>
// class add {
//     public:
//     t1 a;
//     t2 b;
//     add(t1 c,t2 d){
//         a=c;
//         b=d;

//     }
//     t2 display(){
//         return(a+b);

//     }
// };
// int main(){
//     add<float,int> a(6,9,6,9);
//    cout<< a.display();
// }
 
