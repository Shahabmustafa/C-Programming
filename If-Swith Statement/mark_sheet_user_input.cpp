#include <iostream>
using namespace std;

int main(){

int eng,urd,mat,pak,isl,totalMarks;


cout << "English : ";
cin >> eng;
cout << "Urdu : "; 
cin >> urd;
cout << "Maths : "; 
cin >> mat;
cout << "Pak-Study : "; 
cin >> pak;
cout << "Islamyat : "; 
cin >> isl;
cout << "Total Marks : "; 
cin >> totalMarks;
double obtainedMark = eng + urd + mat + pak + isl;
cout<< "Obtained Marks : " << obtainedMark << endl;
cout << "Percentage : " << obtainedMark * 100 / totalMarks << endl;
}