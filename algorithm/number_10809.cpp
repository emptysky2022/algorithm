#include<iostream>
#include<algorithm>

using namespace std;

const int ALL_ALPHABET = 'z' - 'a';
const int ALPHABET_LOWER_A = 97;
int alphabet[ALL_ALPHABET+1];
auto a = fill_n(alphabet, ALL_ALPHABET+1, -1);

int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); ++i){
        if(alphabet[(int)str[i]%ALPHABET_LOWER_A] == -1) alphabet[(int)str[i]%ALPHABET_LOWER_A] = i;
    }
    for(int i = 0; i < ALL_ALPHABET + 1; ++i){
        cout << alphabet[i] << " ";
    }
    
}