#include <iostream>
using namespace std;

int Function(int);

int Function(int num){
    return num + num;
}

int main(){
    int result;
   result = Function(7);
   cout << result;
}