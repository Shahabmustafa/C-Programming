#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter your Number : ";
    cin >> a;
    cout << "Chose your Number : ";
    cin >> b;
    
    c = 1;
    while (c <= b){
        cout << a << " x " << c << " = " << a * c << endl;
        c++;
    }
    
}