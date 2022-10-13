#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
    string A, B;
    vector<string> addResult;
    int digitCheck = 0, res;
    cin >> A >> B;
    int pushZeroCount = max(A.length(), B.length()) - min(A.length(), B.length());
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    while(pushZeroCount > 0){
        if(A.size() > B.size()) B.push_back('0');
        else A.push_back('0');
        pushZeroCount--;
    }
    res = A.back() - '0' + B.back() - '0';
    addResult.push_back(to_string(res));
    A.pop_back();
    B.pop_back();
    while(A.length() > 0){
        res = A.back() - '0' + B.back() - '0';
        if(res / 10 == 1){
            res = res % 10;
            stringstream ssInt(addResult.back());
            int tmp;
            ssInt >> tmp;
            addResult.pop_back();
            addResult.push_back(to_string(tmp + 1));
        }
        addResult.push_back(to_string(res));
        A.pop_back();
        B.pop_back();
    }

    for(auto v : addResult){
        cout << v;
    }
}