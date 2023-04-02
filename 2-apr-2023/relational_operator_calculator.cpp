#include <iostream>
using namespace std;

int main(){
    // int age;
    // cout << "Enter your Age : ";
    // cin >> age;

    // if(age >= 18){
    //     cout << "Eligable";
    // }else{
    //     cout << "Not Eligable";
    // }

    int num1, num2,num;

    cout << "Enter Your First Number : ";
    cin >> num1;
    cout << "Enter Your Second Number : ";
    cin >> num2;
    cout << "Select Opration : ";
    cin >> num;

    if(num == 1){
        cout << "Addation : " << num1 + num2;
    }else if(num == 2){
        cout << "Multiply : " << num1 * num2;
    }else if(num == 3){
        cout << "Subtract : " << num1 - num2;
    }else if(num == 4){
        cout << "Divid : " << num1 / num2;
    }else{
        cout << "Your are rong";
    }
    
}