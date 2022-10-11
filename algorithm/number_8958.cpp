#include<iostream>
#include<vector>

using namespace std;

int getScore(char* ctmp, int N, int score, int con){
    if(N < 0) return score;
    if(ctmp[N] == 'X') return getScore(ctmp, N-1, score, 0);
    else return getScore(ctmp, N-1, score + con, ++con);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    string str;
    cin >> N;
    vector<string> strs;
    cin.ignore();
    for(int i = 0; i < N; ++i){
        getline(cin,str);
        strs.push_back(str);
    }
    for(int i = 0; i < N; ++i){
        string tmp = *strs.begin();
        char ctmp[tmp.length() + 1];
        tmp.copy(ctmp, tmp.length() + 1);
        cout << getScore(ctmp, tmp.length() - 1, 0, 0) << "\n";
        strs.erase(strs.begin());
    }
}