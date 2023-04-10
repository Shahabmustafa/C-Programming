#include<iostream>
using namespace std;

int main(){
    int english,urdu,maths,islamyat,pakStudy,totalMarks;
    double percentage,obtainedMarks;

    english = 70;
    urdu = 60;
    maths = 80;
    islamyat = 45;
    pakStudy = 40;
    totalMarks = 400;
    obtainedMarks = english + urdu + maths + islamyat + pakStudy;
    percentage = obtainedMarks * 100 / totalMarks;

    cout<< "English : " << english << endl;
    cout<< "Urdu : " << urdu << endl;
    cout<< "Maths : " << maths << endl;
    cout<< "Islamyat : " << islamyat << endl;
    cout<< "Pak-Study : " << pakStudy << endl;
    cout<< "Obtained Marks : " << obtainedMarks << endl;
    cout<< "Total Marks : " << totalMarks << endl;
    cout<< "Percentage : " << percentage << endl;
    
}