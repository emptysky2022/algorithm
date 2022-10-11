#include<iostream>
using namespace std;
const int correctCount[6] = {1,1,2,2,2,8};

int main(){
    int count[6];
    for(int i = 0; i < 6; ++i){
        cin >> count[i];
        count[i] = correctCount[i] - count[i];
    }
    for(int i = 0; i < 6; ++i) {
        cout << count[i] << " ";
    }
    cout << endl;
}