#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    int min, pos;
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < N; ++i){
        min = arr[i];
        pos = i;
        for(int j = i+1; j < N; j++){
            if(min > arr[j]) {
                min = arr[j];
                pos = j;
            }
        }
        if(min == arr[i])continue;
        arr[pos] = arr[i];
        arr[i] = min;
    }
    for(int i = 0; i < N; i++){
        cout << arr[i] << "\n";
    }

}