#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A,B,V;
    cin >> A >> B >> V;
    if((V-A)%(A-B) == 0)
        cout << (V-A)/(A-B) + 1;
    else cout << (V-A)/(A-B) + 2;
}