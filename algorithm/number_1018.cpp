#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    char arr[N][M];
    int count = 64;
    int result;
    bool white;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i <= N-8; i++){
        for(int j = 0; j <= M-8; j++){
            white = true;
            result = 0;
            for(int k = i; k < i+8; k++){
                for(int l = j; l < j+8; l++){
                    if((arr[k][l] == 'W' && !white || arr[k][l] == 'B' && white)){
                        result++;
                    }
                    white = white ? false : true;
                }
                    white = white ? false : true;
            }
            count = count < result ? count : result;
            white = false;
            result = 0;
            for(int k = i; k < i+8; k++){
                for(int l = j; l < j+8; l++){
                    if((arr[k][l] == 'W' && !white || arr[k][l] == 'B' && white)){
                        result++;
                    }
                    white = white ? false : true;
                }
                    white = white ? false : true;
            }
            count = count < result ? count : result;
        }
    }
    cout << count;
}