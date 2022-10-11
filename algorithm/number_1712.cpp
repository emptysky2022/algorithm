#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long A, B, C;
    cin >> A >> B >> C;
    if(C <= B){
        cout << -1;
        return 0;
    }
    
    cout << A / (C - B) + 1;
}