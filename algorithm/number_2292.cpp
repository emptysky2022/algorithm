#include<iostream>

using namespace std;

int main(){
    int N, tmp = 1, i = 1;
    cin >> N;
    
    if(N == 1) cout << 1;
    else{
        while(true){
            if(N <= tmp + i * 6){
                cout << i + 1;
                break;
            }
            tmp += i * 6;
            ++i;
        }
    }
}