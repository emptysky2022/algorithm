#include<iostream>

using namespace std;

int main(){
    int X;
    int count = 1, dem = 1, mol = 1;
    bool upDownCheck = true;
    cin >> X;

    while(count != X){
        if(upDownCheck == true && mol == 1){
            dem++;
            upDownCheck = false;
        }else if(upDownCheck == false && dem == 1){
            mol++;
            upDownCheck = true;
        }else{
            if(upDownCheck){
                mol--;
                dem++;
            }else{
                mol++;
                dem--;
            }
        }
        count++;
    }
    cout << mol << "/" << dem;
}