#include<iostream>
#include<vector>
using namespace std;

int majority(const vector<int>& A){
    int N = A.size();
    int majority = -1, majorityCount = 0;
    for(int i = 0; i < N; ++i){
        int V = A[i], count =0;
        for(int j = 0; j < N; ++j){
            if(A[j] == V){
                ++count;
            }
        }
        if(count > majorityCount){
            majorityCount = count;
            majority = V;
        }
    }
    return majority;
}

int majority2(const vector<int>& A){
    int N = A.size();
    vector<int> count(101, 0);
    for(int i = 0; i<N; ++i){
        count[A[i]]++;
    }
    int majority = 0;
    for(int i = 1; i<=100; i++){
        if(count[i] > count[majority]){
            majority = i;
        }
    }
    return majority;
}

int main(){
    vector<int> record = {90,60,80,40,70,22,50,99,98,99,95,95,80,80,70,80};
    cout << "majority 실행\n";
    cout << majority(record) << "\n" << endl;
    cout << "majority2 실행\n";
    cout << majority2(record);

}



