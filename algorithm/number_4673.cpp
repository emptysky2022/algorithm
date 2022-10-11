#include<iostream>
using namespace std;

int d(int i){
    return i + i%10 + i/10%10 + i/100%10 + i/1000;
}

int main(){
    bool arr[10001];
    for(int i = 0; i < 10001; ++i) arr[i] = true;
    int res;
    for(int i = 0; i < 10001; ++i) {
        res = d(i);
        if(res <= 10000) arr[res] = false;
    }
    for(int i = 0; i < 10001; ++i) if(arr[i]) cout << i << endl;
}