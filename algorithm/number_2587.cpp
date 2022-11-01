#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int sum = 0;
    int input[5];
    for(int i = 0; i < 5; i++){
        cin >> input[i];
        sum += input[i];
    }
    sort(&input[0], &input[5]);
    cout << sum / 5 << "\n" << input[2];
}