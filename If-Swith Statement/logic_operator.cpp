#include <iostream>
using namespace std;

int main(){
    int per;
    cout << "Enter your Number : ";
    cin >> per;
    if(per >= 90){
        cout << "Very Excelent";
    }else if(per >= 80 && per < 90){
        cout << "Excelent";
    }else if(per >= 70 && per < 80){
        cout << "Very Good";
    }else if(per >= 60 && per < 70){
        cout << "Good";
    }else{
        cout << "Fail";
    }
}