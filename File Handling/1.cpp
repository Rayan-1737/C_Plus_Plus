# include <iostream>
# include<fstream>
using namespace std;
int main(){
    string hello;

    ifstream wow("hello.txt");
    while (getline (wow, hello)) {
        cout << hello;
}
        wow.close();
}     



// #include <iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream MyReadFile("Hello.txt");
//     string word;
//     while (MyReadFile >> word) {
//     cout << word;
// }
// MyReadFile.close();

// }

