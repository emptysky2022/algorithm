#include<iostream>
#include<algorithm>

using namespace std;

int cmp(string a, string b){
    if(a.length() == b.length()){
        for(int i = 0; i < a.length(); i++){
            if(a.at(i) != b.at(i)) return a.at(i) < b.at(i);
        }
        return a.length() < b.length();
    }
    return a.length() < b.length();
}

int main(){
    int N;
    cin >> N;
    string arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(&arr[0], &arr[N], cmp);
    cout << arr[0] << "\n";
    for(int i = 1; i < N; i++){
        if(arr[i] == arr[i-1]) continue;
        cout << arr[i] << "\n";
    }
}