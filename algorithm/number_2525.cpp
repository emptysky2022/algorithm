#include<iostream>

using namespace std;

int main(){
    int hour=0, minute=0;
    int cookTime = 0;
    cin >> hour >> minute;
    cin >> cookTime;
    
    int endMinute = 0, endHour = 0;
    if(minute + cookTime % 60 >= 60){
        endMinute = (minute + cookTime) % 60;
        endHour ++;
    }else endMinute = minute + cookTime % 60;
    if(endHour + hour + cookTime / 60 >= 24){
        endHour = (endHour + hour + cookTime / 60) % 24;
    }else endHour = endHour + hour + cookTime/60;

    cout << endHour << " " << endMinute << endl;
}