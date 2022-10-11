#include<iostream>
#include<limits>

using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N];
    for(int i =0; i< N; ++i){
        cin >> arr[i];
    }
    int min = numeric_limits<int>::max(), max = numeric_limits<int>::min();
    for(int i=0; i<N; ++i){
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }
    cout << min << " " << max << endl;
}