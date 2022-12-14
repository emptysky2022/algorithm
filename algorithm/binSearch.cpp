#include<iostream>
#include<vector>

using namespace std;

int binSearch(const vector<int>& A, int x){
    int n = A.size();
    int lo = -1, hi = n;

    while(lo + 1 < hi){
        int mid = (lo + hi) / 2;
        if(A[mid] < x) lo = mid;
        else hi = mid;
    }
    return hi;
}