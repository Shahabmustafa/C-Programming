#include <iostream>
using namespace std;

int main(){
    int num[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter Your Number : ";
        cin >> num[i];
    }

    int sum = num[0];

    for(int i = 1; i < 5; i++){
        sum = sum + num[i];
    }

    cout << "Your Sum Number : " << sum;
}