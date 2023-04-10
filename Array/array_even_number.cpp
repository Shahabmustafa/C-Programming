#include <iostream>
using namespace std;

int main(){
    int num[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter your Name : ";
        cin >> num[i];
    }

    int even = 0;

    for(int i = 0; i < 5; i++){
        if(num[i] % 2 == 0){
            even++;
        }
    }
    cout << "Your Even Number : " << even << endl;
    cout << "Your odd Number : " << 5 - even << endl;
}