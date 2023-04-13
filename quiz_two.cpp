#include <iostream>
using namespace std;

int main(){
    int num1,num = 1;

    cout << "Enter Your Number : ";
    cin >> num1;

    for(int i = 1; i <= num1; i++){
        num = num * i;
    }

    cout << "Factorial of "<< num1 << " : " << num;

}