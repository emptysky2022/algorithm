#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    int H, W, N;
    cin >> T;
    int room[T];
    for(int i = 0; i < T; ++i){
        cin >> H >> W >> N;
        if(N % H == 0) room[i] = H * 100 + N / H;
        else room[i] = N % H * 100 + N / H + 1;
    }
    for(int i = 0; i < T; ++i){
        cout << room[i] << "\n";
    }
}