#include <iostream>
using namespace std;

int main(){
    int num[6];

    for (int i = 0; i < 6; i++){
    cout << "Enter Your Number : ";
    cin >> num[i];
    }

    int large = num[0];

    for (int i = 0; i < 6; i++){
        if (num[i] > large){
        large = num[i];
        }
        
    }
    
    cout << "Your Large Number : " << large;
}