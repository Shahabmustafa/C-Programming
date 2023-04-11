#include <iostream>
using namespace std;

int main(){
    int a = 100;
    cout << "value of a : " << a << endl;
    cout << "Address of a : " << &a << endl;

    int *ptr;
    ptr = &a;
    cout << "Pointer Value of A : " << ptr;
    cout << endl << "Value of A : " << *ptr;

    string name = "Shahab";
    cout << endl << "String : " << sizeof(name);
}