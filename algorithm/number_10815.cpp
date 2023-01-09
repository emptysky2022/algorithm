#include<iostream>
#include<set>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N;
    int tmp;
    
    set<int> arr;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        arr.insert(tmp);
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        cout << arr.count(tmp) << " ";
    }
}