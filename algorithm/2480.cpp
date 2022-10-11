#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if((x == y) && (y == z)) cout << 10000+x*1000;
    else if(x == y) cout << 1000+x*100;
    else if(x == z) cout << 1000+x*100;
    else if(z == y) cout << 1000+y*100;
    
}