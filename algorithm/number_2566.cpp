#include<iostream>

using namespace std;

int main(){
    int arr[9][9];
    int max = 0;
    int pos = 0;
    for(int i = 0; i < 81; i++){
        cin >> arr[i/9][i%9];
        if(arr[i/9][i%9] > max){
            max = arr[i/9][i%9];
            pos = i;
        }
    }
    cout << max << "\n" << pos / 9 + 1 << " " << pos % 9 + 1;
}