#include <iostream>
using namespace std;

int main(){

    int num,num1 = 0;

    cout << "Enter Your Number : ";
    cin >> num;

    for(int i = 0; i > num; i++){
        num1 = num1 * num;
    }

    cout << num1;
}