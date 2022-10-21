#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int N, count;
    cin >> N;
    int pos[N];
    vector<int> sortedArr;
    for(int i = 0; i < N; i++){
        cin >> pos[i];
        sortedArr.push_back(pos[i]);
    }
    sort(sortedArr.begin(), sortedArr.end());
    sortedArr.erase(unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());
    for(int i = 0; i < N; i++){
        cout << lower_bound(sortedArr.begin(), sortedArr.end(), pos[i]) - sortedArr.begin() << " ";
    }
}