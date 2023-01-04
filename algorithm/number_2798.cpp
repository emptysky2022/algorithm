#include<iostream>
#include<algorithm>

using namespace std;

int blackjack(int arr[], int target, int size){
    int approximate = 0;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            for(int k = j+1; k < size; k++){
                if(target < arr[i]+arr[j]+arr[k]) continue;
                else if(target == arr[i]+arr[j]+arr[k]) return target;
                approximate = target - approximate > target - (arr[i]+arr[j]+arr[k]) ? arr[i]+arr[j]+arr[k] : approximate;
            }
        }
    }
    return approximate;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(&arr[0],&arr[N-1]);

    cout << blackjack(arr, M, N);
}