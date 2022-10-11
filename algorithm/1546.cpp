#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, max = 0;
    cin >> N;
    int arr[N];
    long double average = 0;

    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < N; ++i){
        average += arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << average/max*100/N;
}