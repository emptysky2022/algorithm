#include<iostream>
#include<vector>

using namespace std;

vector<double> movingAverage(const vector<double>& A, int M){
    vector<double> ret;
    int N = A.size();
    for(int i = M - 1 ; i < N; ++i){
        double averageCount = 0;
        for(int j = 0; j < M; ++j){
            averageCount += A[i-j];
        }
        ret.push_back(averageCount / M);
    }
    return ret;
}

vector<double> movingAverage2(const vector<double>& A, int M){
    vector<double> ret;
    int N = A.size();
    double averageCount = 0;
    for(int i = 0; i < M; ++i){
        averageCount += A[i];
    }
    ret.push_back(averageCount / M);
    for(int i = M ; i < N; ++i){
        averageCount = averageCount - A[i-M] + A[i];
        ret.push_back(averageCount / M);
    }
    return ret;
}

int main(){
    vector<double> weight = {80.2, 78.3, 77.7, 76.8, 76.5, 75.8, 75.6, 78.8, 80.1, 79.9, 79.3};
    int M = 3;
    cout << "나의 " << M <<"달 간격 몸무게 이동평균 : "<<endl;
    vector<double> result = movingAverage(weight, M);
    for(int i = 0; i < result.size(); ++i){
        cout << "result : " <<result[i] << "\t" << endl;
    }
    vector<double> result2 = movingAverage(weight, M);
    for(int i = 0; i < result2.size(); ++i){
        cout << "result2 : " <<result2[i] << "\t" << endl;
    }
}