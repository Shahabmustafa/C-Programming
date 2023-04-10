#include <iostream>
#include <string>
using namespace std;

int main(){
    string Name = "Shahab Mustafa";
    string name;
    int age = 18;
    int balance;
    
    if(name == Name){
    cout << "Enter Your Name : ";
    cin >> name;
    }else{
        cout << "Incorrect Name";
    }
    cout << "Enter Your Age : ";
    cin >> age;
}