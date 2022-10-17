#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    vector<int> fac;
    cin >> N;

    while(N != 1){
        for(int i = 2; i <= N; i++){
            if(N % i == 0) {
                fac.push_back(i);
                N = N / i;
                break;
            }
        }
    }
    for(const auto& i : fac) cout << i << "\n";
}