#include<iostream>
using namespace std;

int main(){
    int a,b;
    string userChoice;
    do{
        cout << "Enter your First Number : ";
        cin >> a;
        cout << "Enter your Second Numbe : ";
        cin >> b;
        cout << a +b;
        cout << "\nDo you want more Addition (Yes,No)? ";
        cin >> userChoice;
    }while(userChoice == "yes");

    cout << "Thank You For Answer!";
}