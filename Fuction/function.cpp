#include <iostream>
using namespace std;

// function declaration
void sum(int,int);

void table(int);

int main(){
    // sum(50,30);
    table(10);
}

// function defination
void sum(int x,int y){
    cout << "sum = " << x + y;
}

void table(int Table){
    for(int i = 1; i < 11; i++){
        cout << Table << " x " << i << " = " << Table*i << endl;
    }
}

