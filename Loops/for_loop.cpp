#include <iostream>
using namespace std;

int main(){
    // Table
    int a,table,range;
    cout << "Enter Your Number : ";    
    cin >> table;
    cout << "Enter your Range : ";
    cin >> range;
    for(a = 1; a <= range; a++){
        cout << table << " x " << a << " = " << table * a << endl;
    }

    // Factorial of For Loop
    // 5!
    // 5 * 4 * 3 * 2 * 1;

    int num,i;
    int dec = 1.0;
    cout << "Enter your Number : ";
    cin >> num;
    for(i = 1; i <= num; i++){
        dec *= i;
    }
    cout << "Factorial of" << " = " << dec;
}