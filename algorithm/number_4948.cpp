#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    int N;
    while(true){
        cin >> N;
        if(N == 0) break;
        vector<int> arr(2*N - N);
        iota(arr.begin(), arr.end(), N+1);
        for(int count = 2; count*count <= 2*N; count++){
            arr.erase(remove_if(arr.begin(), arr.end(), [count](int n){return ((n % count) == 0 && n != count) ;}), arr.end());
        }
        cout << arr.size() << "\n";
    }

}