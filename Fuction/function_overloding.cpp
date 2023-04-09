#include <iostream>
using namespace std;

void sum(int,int);
void sum(int,double);
void sum(double,int);
void sum(double,double);

int main(){
    sum(20,12);
    sum(12,12.2);
    sum(12.2,12.2);
    sum(12.2,12);
}

void sum(int x,int y){
    cout << "two int Number : " << x + y << endl;
}

void sum(int x,double y){
    cout << "two int Number : " << x + y << endl;
}

void sum(double x,double y){
    cout << "two int Number : " << x + y << endl;
}

void sum(double x,int y){
    cout << "two int Number : " << x + y << endl;
}