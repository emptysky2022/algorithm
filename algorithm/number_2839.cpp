#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int bagCount = 0;
    if(N == 7 || N < 5 && N != 3) cout << -1;
    else switch (N % 5)
    {
    case 0 : 
        cout << N / 5;
        break;
    case 2 : 
        if((N % 5 + 10) % 3 == 0){
            bagCount += N / 5 - 2;
            N = N % 5 + 10;
            cout << bagCount + N / 3;
        }else cout << -1;
        break;
    case 3 : 
        cout << N / 5 + 1;
        break;
    default:
        if((N % 5 + 5) % 3 == 0){
            bagCount += N / 5 - 1;
            N = N % 5 + 5;
            cout << bagCount + N / 3;
        }else cout << -1;
        break;
    }
}