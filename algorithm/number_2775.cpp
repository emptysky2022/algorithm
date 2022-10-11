#include<iostream>

using namespace std;

int member(int k, int n){
    if(k == 0) return n;
    else if(n == 2) return n + k;
    else return member(k-1, n) + member(k, n-1);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, k, n;
    cin >> T;
    int testCase[T];
    for(int i = 0; i < T; ++i){
        cin >> k >> n;
        testCase[i] = member(k, n);
    }
    for(int i = 0; i < T; ++i){
        cout << testCase[i] << "\n";
    }
}