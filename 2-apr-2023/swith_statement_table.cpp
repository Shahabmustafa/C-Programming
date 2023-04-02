#include <iostream>
using namespace std;

int main(){
   int month;
   cout << "Enter your Month : ";
   cin >> month;

switch (month){
    case 1:
    cout << "January";
    break;
    case 2:
    cout << "Febuery";
    break;
    case 3:
    cout << "March";
    break;
    case 4:
    cout << "April";
    break;
    case 5:
    cout << "May";
    break;
    case 6:
    cout << "June";
    break;
    case 7:
    cout << "July";
    break;
    case 8:
    cout << "Augest";
    break;
   default:
   cout << "This Month Not Found";
    break;
   }
         return 0;

   
}