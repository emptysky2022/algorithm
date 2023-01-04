#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    int count = 1;
    int decomposition;
    int tmp;
    while(true){
        tmp = count;
        decomposition = tmp;
        while(tmp/10 != 0){
            decomposition += tmp%10;
            tmp = tmp / 10;
        }
        decomposition += tmp % 10;
        if(decomposition == N){
            cout << count;
            break;
        }
        else if(count == N) {
            cout << 0;
            break;
        }
        count++;
    }

}