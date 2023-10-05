/*#Write a program to define a function outside the class using scope resolution operator?*/
#include <iostream>
using namespace std;

class MyClass {
public:
    void office(); 
};
void MyClass::office() 
{ 
    cout<<"Jigar Panara"<< endl;
    cout<<"ER NO. 220130318017"<< endl;
    cout << "Hey justin" << endl;// Class method using scope resolution
}
int main() {
    MyClass obj;
    obj.office(); 
    return 0;
}
