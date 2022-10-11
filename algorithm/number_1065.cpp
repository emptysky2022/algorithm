#include<iostream>

using namespace std;

int han(int N){
    if(N < 100) return N;
    int result = 99;
    for(int i = 100; i <= N; ++i){
        if((double)(i % 10 + i / 100) / 2 == (double)(i/10%10)) ++ result;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    int result = han(N);
    cout << result;

}