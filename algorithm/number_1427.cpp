#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> arr;
    while(N / 10 != 0){
        arr.push_back(N%10);
        N = N / 10;
    }
    arr.push_back(N % 10);
    sort(arr.begin(), arr.end());
    for(int i = arr.size() - 1; i >= 0; --i){
        cout << arr[i];
    }
}