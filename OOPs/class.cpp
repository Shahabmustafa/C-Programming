#include <iostream>
using namespace std;

class student{
    string studentName;
    int rollNumber;
    int className;

    public:
    void setName(string a){
        studentName = a;
    }

    void setRollNumber(int roll){
        rollNumber = roll;
    }

    void setClassName(int c){
        className = c;
    }
    
    string getName(){
       return studentName;
    }

    int getRollNumber(){
        return rollNumber;
    }

    int getClassName(){
        return className;
    }

    
};

int main(){
    student ali;
    ali.setName("Shahab Mustafa");
    ali.setRollNumber(20);
    ali.setClassName(12);

    cout << ali.getName() << endl;
    cout << ali.getRollNumber() << endl;
    cout << ali.getClassName();

}