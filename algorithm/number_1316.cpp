#include<iostream>
#include<algorithm>

using namespace std;
const int ALPHABET_A = (int)'a';
const int ALPHABET_SIZE = (int)'z' - (int)'a' + 1;
int alphabetCheck[ALPHABET_SIZE];
auto a = fill_n(alphabetCheck, ALPHABET_SIZE, 0);

int main(){
    int N;
    string inputString;
    cin >> N;
    int count = N;
    for(int i = 0; i < N; ++i){
        cin >> inputString;
        for(int j = 0; j < inputString.length(); ++j){
            if(alphabetCheck[(int)inputString[j]%ALPHABET_A] != 0 && inputString[j] != inputString[j-1]){
                --count;
                break;
            }
            alphabetCheck[(int)inputString[j]%ALPHABET_A] ++;
        }
        fill_n(alphabetCheck, ALPHABET_SIZE, 0);   
    }
    cout << count;
    
}