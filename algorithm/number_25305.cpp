#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int N, k;

    cin >> N >> k;
    int arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(&arr[0], &arr[N]);

    cout << arr[N-k];
}