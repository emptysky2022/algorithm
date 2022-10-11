#include<iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    A = A/100+A%10*100+A/10%10*10;
    B = B/100+B%10*100+B/10%10*10;
    cout << max(A,B);
}