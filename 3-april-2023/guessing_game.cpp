#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
using namespace std;

int main (){
    srand((unsigned) time(0));
    int randomNum,userGuess,count = 0;
    randomNum = (rand() % 100) + 1;
    cout << randomNum;
    while (true){
        count++;
        cout << "Chose Your Guess Number : ";
        cin >> userGuess;
        if(randomNum < userGuess){
            cout << "Your Guess Number is High" << endl;
        }else if(randomNum > userGuess){
            cout << "Your Guess Number is Low" << endl;
        }else{
            break;
        }
    }
    cout << "Congrates Your Guess Number is Perfect In attempty " << count << " time";

}