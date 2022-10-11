#include<iostream>

using namespace std;

const int ALPHABET_SIZE = (int)'z' - (int)'a';

int alphabet[ALPHABET_SIZE + 1] = {};

void mostAlphabet(string str){
    int max = 0;
    bool maxTwiceCheck = false;
    for(int i = 0; i < str.length(); ++i){
        if((int)str[i] < 'a') alphabet[(int)str[i] % (int)'A']++;
        else alphabet[(int)str[i] % (int)'a']++;
    }
    for(int i = 1; i < ALPHABET_SIZE + 1; ++i){
        if(alphabet[max] == alphabet[i]) maxTwiceCheck = true;
        else if(alphabet[max] < alphabet[i]){
        maxTwiceCheck = false;
        max = i;
        } 
    }
    if(maxTwiceCheck) cout << "?";
    else cout << (char)((int)'A' + max);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> str;
    mostAlphabet(str);
}