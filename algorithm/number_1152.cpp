#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

int main(){
    string strWithSpace;
    getline(cin, strWithSpace);
    vector<string> str;
    string stringBuffer;
    istringstream ss(strWithSpace);
    while(getline(ss, stringBuffer, ' ')){
        if(stringBuffer.compare("\n") != -1)
            str.push_back(stringBuffer);
    }
    cout << str.size();
}