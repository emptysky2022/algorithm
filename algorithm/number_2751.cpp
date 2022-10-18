#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    make_heap(&arr[0], &arr[N]);
    sort_heap(&arr[0], &arr[N]);
    for(int i = 0; i < N; i++){
        cout << arr[i] << "\n";
    }
}