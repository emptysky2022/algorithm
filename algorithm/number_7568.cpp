#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    int arr[N][2];
    int rank;
    for(int i = 0; i < N; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i = 0; i < N; i++){
        rank = 1;
        for(int j = 0; j < N; j++){
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) rank++;
        }
        cout << rank << " ";
    }
}