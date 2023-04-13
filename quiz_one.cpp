#include <iostream>
using namespace std;

int main(){
 int x,y,sum = 0;

    cout << "Enter Your First Number : ";
    cin >> x;
    cout << "Enter your Second Number : ";
    cin >> y;
    for(int i = 0; i < x; i++){
        sum = sum + y;
    }

    cout << "Product Number = " << sum;
}