 #include <iostream>
 #include <string>
 using namespace std;

 int main(){
    int num[5];
    string name[] = {"Shahab Mustafa","Kashif Mustafa","Bilal Mustafa","Sheraz Mustafa","Aftab Mustafa"};
    for (int i = 0; i < 5; i++){
        cout << name[i] << endl;
    }
    for (int i = 0; i < 5; i++){
        cout << "Enter your Number ["<< i << "] : ";
        cin >> num[i];
    }

    cout << "Your Number Add Below" << endl;

    for(int i = 0; i < 5; i++){
        cout << num[i] << endl;
    }

    string months[] = {"January","February","March","April","May","June","July","Augest","September","Octuber","November","December"};

    for (int i = 0; i < 12; i++)
    {
        cout << months[i] << endl;
    }

 }