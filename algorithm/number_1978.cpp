#include<iostream>

using namespace std;

bool decimal(int n){
    if(n == 2) return true;
    if(n == 1 || n % 2 == 0) return false;
    for(int i = 3; i < n; i+=2){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int N;
    int tmp;
    cin >> N;
    int decCount = 0;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(decimal(tmp))decCount++;
    }
    cout << decCount;
}