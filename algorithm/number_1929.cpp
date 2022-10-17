#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int M, N;
    cin >> M >> N;
    if(M == 1) M++;
    int i = M;
    vector<int> arr(N - M + 1);
    iota(arr.begin(), arr.end(), M);
    for(int count = 2; count*count <= N; count++){
        int i = count;
        arr.erase(remove_if(arr.begin(), arr.end(), [i](int n){ return ((n % i) == 0 && n != i);}), arr.end());
    }
    for(auto a : arr) cout << a << "\n";
}