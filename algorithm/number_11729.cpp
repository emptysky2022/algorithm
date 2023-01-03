#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


void moveTo(int start, int finish){
    cout << start << " " << finish << "\n";
}

void hanoi(int N, int start, int finish, int to){
    if(N == 1) return moveTo(start, finish);
    else{
        hanoi(N-1, start, to, finish);
        moveTo(start, finish);
        hanoi(N-1, to, finish, start);
    }
}

int main(){
    ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
    int N;
    cin >> N;
    int count = pow(2, N) - 1;
    cout << count << "\n";
    hanoi(N, 1, 3, 2);
}