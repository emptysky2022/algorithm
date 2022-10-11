#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a,b;
    vector<int> arr;
    
    do{
        cin >> a >> b;
        arr.push_back(a+b);
    }while(a == 0 && b == 0);
    
    for(int i = 0; i < arr.size()-1; ++i){
        cout << arr[i] << "\n";
    }
}