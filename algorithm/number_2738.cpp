#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    int arr[N][M];
    int tmp;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> tmp;
            arr[i][j] += tmp;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }


}