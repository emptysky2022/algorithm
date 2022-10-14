#include<iostream>

using namespace std;

bool decimal(int num){
    if(num == 2)return true;
    if(num == 1 || num % 2 == 0) return false;
    for(int i = 3; i < num; i += 2){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int M, N;
    int decAdd = 0, decFirst = 0;
    cin >> M >> N;
    for(int i = M; i <= N; i++){
        if(decimal(i)) {
            decAdd += i;
            if(decFirst == 0) decFirst = i;
        }
        
    }
    if(decAdd != 0)
    cout << decAdd << "\n" << decFirst;
    else cout << -1;
}