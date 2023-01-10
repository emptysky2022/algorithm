#include<iostream>
#include<map>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int M, N, key;
    
    cin >> M;
    map<int, int> cards;
    
    for(int i = 0; i < M; i++){
        cin >> key;
        if(cards.count(key) != 0){
            cards[key]++;
        }else{
            cards[key]=1;
        }
    }
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> key;
        if(cards.find(key) != cards.end()){
            cout << cards[key] << " ";
        }else cout << "0 ";
    }
}