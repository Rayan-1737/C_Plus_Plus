#include <iostream>
using namespace std;

class AboutMe {
  public:
    string name;
    float age;
    int roll;
    string college;

    // Class methods
    
    void displayInfo() {
        cout << name << endl;
        cout << age << endl;
        cout << roll << endl;
        cout << college << endl;
    }
};

int main() {
    AboutMe info;         // Single Object
    info.name = "Rayan";
    info.age = 18;
    info.roll = 141;
    info.college = "ITM Skills University";

    info.displayInfo();    // use (object name "info") and dot(.) function name call (class method)


    cout << "---------------------------------------------- \n";

    AboutMe details;        // Another Object    
    details.name = "XYZ";
    details.age = 18.3;
    details.roll = 123;
    details.college = "School Of Future Tech";

    details.displayInfo();    // use (object name "details") and dot(.) function name call (class method)
    return 0;
}

