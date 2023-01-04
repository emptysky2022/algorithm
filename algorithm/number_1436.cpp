#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    int count = 0;
    int num = 1;
    int tmp;
    while(true){
        tmp = num;
        while(tmp / 100 != 0){
            if(tmp % 1000 == 666){
                count++;
                break;
            }
            tmp = tmp / 10;
        }
        if(count == N){
            cout << num;
            break;
        }
        num++;
    }
}