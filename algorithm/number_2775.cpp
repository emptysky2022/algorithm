#include<iostream>

using namespace std;

int main(){
    int T, k, n;
    int result[15][15];
    for(int i = 0; i < 15; ++i){
        result[i][0] = 1;
        result[0][i] = i+1;
    }
    for(int i = 1; i < 15; ++i){
        for(int j = 1; j < 15; ++j){
            if(j == 0) result[i][j] = 1;
            else result[i][j] = result[i-1][j] + result[i][j-1];
        }
    }
    cin >> T;
    int arr[T];
    for(int i = 0; i < T; ++i){
        cin >> k >> n;
        arr[i] = result[k][n-1];
    }
    for(int i = 0; i < T; ++i){
        cout << arr[i] << "\n";
    }
}