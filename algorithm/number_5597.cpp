#include<iostream>

using namespace std;

int main(){
    int arr[30];
    int num;
    fill(&arr[0], &arr[29], 0);
    for(int i = 0; i < 28; i++){
        cin >> num;
        arr[num - 1]++;
    }
    for(int i = 0; i < 30; i++){
        if(!arr[i]) cout << i+1 << "\n";
    }
}