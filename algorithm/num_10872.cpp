#include<iostream>

using namespace std;

int factorial(int x){
    if(x == 0 || x == 1) return 1;
    else if(x == 2) return 2;
    return x * factorial(x - 1);
}

int main(){
    int N;
    cin >> N;
    cout << factorial(N);
}