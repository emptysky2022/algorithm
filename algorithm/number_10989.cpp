#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, tmp, max = 0;
    cin >> N;
    int count[10000];
    fill(&count[0], &count[9999], 0);
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(max < tmp)max = tmp;
        count[tmp - 1]++;
    }
    for(int i = 0; i < max; i++){
        while(count[i] > 0){
            cout << i+1 << "\n";
            count[i]--;
        }
    }
}