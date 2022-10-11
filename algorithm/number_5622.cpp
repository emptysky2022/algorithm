#include<iostream>
using namespace std;
const int ALPHABET_NUM[8] = {3,6,9,12,15,19,22,26};
const int ALPHABET_INT = (int)'A' - 1;

int main(){
    string str;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < str.length(); ++i){
        for(int j = 0; j < 8; ++j){
            if((int)str[i] - ALPHABET_INT <= ALPHABET_NUM[j]){
                sum += j + 3;
                break;
            }
        }
    }
    cout << sum;
}