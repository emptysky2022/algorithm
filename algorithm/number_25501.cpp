#include<iostream>
#include<string>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int T;
    int count;
    string s;
    cin >> T;
    for(int i = 0; i < T; i++){
        count = 0;
        cin >> s;
        int l = 0;
        int r = s.size() - 1;
        bool flag = true;
        for( ; l <= r; l++, r--){
            count++;
            if(s[l] != s[r]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "1" : "0") << " " << (flag && s.size() % 2 == 0 ? count + 1 : count) << "\n";
    }

}