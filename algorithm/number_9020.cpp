#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    int T, N;
    int tmp;
    vector<int> arr(9999);
    iota(arr.begin(), arr.end(), 2);
    for(int count = 2; count*count < 10000; count++){
        arr.erase(remove_if(arr.begin(), arr.end(), [count](int n){ return ((n % count) == 0 && n != count) ;}), arr.end());
    }
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> N;
        tmp = N/2;
        while (true){
            auto a = find(arr.begin(), arr.end(), tmp);
            if(a == arr.end()) tmp++;
            else{
                a = find(arr.begin(), arr.end(), N - tmp);
                if(a == arr.end()) tmp++;
                else{
                    cout << N-tmp << " " << tmp << "\n";
                    break;
                }
            }
        }
        
    }
}