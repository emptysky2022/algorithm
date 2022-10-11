#include<iostream>

using namespace std;

double averageCheck(int* arr, int n){
    double total = 0;
    int count = 0;
    for(int i = 0; i < n; ++i){
        total += arr[i];
    }
    total /= n;
    for(int i = 0; i < n; ++i){
        if(total < arr[i])++count;
    }
    return (double)count / n * 100;
}

int main(){
    int C, N;

    cin >> C;
    double average[C];
    for(int i = 0; i < C; ++i){
        cin >> N;
        int arr[N];
        for(int j = 0; j < N; ++j){
            cin >> arr[j];
        }
        average[i] = averageCheck(arr, N);
    }
    cout << fixed;
    cout.precision(3);
    for(int i = 0; i < C; ++i){
        cout << average[i] << "%\n";
    }
}