#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    int N, M;
    set<string> S;
    string tmp;
    int count = 0;
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        cin >> tmp;
        S.insert(tmp);
    }
    for(int i = 0; i < M; i++){
        cin >> tmp;
        count += S.count(tmp);
    }
    cout << count;

}