#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
    int N, max = INT_MIN, min = INT_MAX;
    long double sum = 0;
    int modeArr[8001];
    int mode = 0, modeMax = 0;
    int cnn = 0;
    cin >> N;
    vector<int> arr(N);
    fill(&modeArr[0], &modeArr[8000], 0);
    modeArr[8000] = 0;
    for(int i = 0; i < N ; i++){
        cin >> arr[i];
        sum += arr[i];
        if(max < arr[i])max = arr[i];
        if(min > arr[i]) min = arr[i];
        if(arr[i] < 0) modeArr[abs(arr[i]) - 1]++;
        else modeArr[arr[i]+4000]++;
    }
    for(int i = sizeof(modeArr)/sizeof(modeArr[0])-1; i >= 4000; i--){
        if(modeArr[i] >= modeMax){
            modeMax = modeArr[i];
            mode = i-4000;
            cnn++;
        }
    }
    for(int i = 0; i < 4000; i++){
        if(modeArr[i] >= modeMax){
            modeMax = modeArr[i];
            mode = -1 * i - 1;
            cnn++;
        }
    }
    if(cnn > 2){
        int cnnn = 0;
        while(cnnn < 2){
            for(int i = 3999; i >= 0; i--){
                if(modeArr[i] == modeMax){
                    mode = -i-1;
                    cnnn++;
                }
                if(cnnn >= 2) break;
            }
            for(int i = 4000; i <= 8000; i++){
                if(modeArr[i] == modeMax){
                    mode = i - 4000;
                    cnnn++;
                }
                if(cnnn >= 2) break;
            }
        }
    }
    sort(arr.begin(), arr.end());
    int tmp = sum/N == 0? 0 : (int)round(sum/N);
    cout << tmp << "\n" << arr[N/2] << "\n" << mode << "\n" << max - min << "\n";
}