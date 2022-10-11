#include<iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int count = 0;
    for(int i = str.length()-1; i >= 0; --i){
        switch(str[i]){
            case '=':
                switch(str[i-1]){
                    case 'c': count++;--i;break;
                    case 'z':
                        if(str[i-2] == 'd'){
                            count++; i-=2;break;
                        }
                        else count++;--i;break;
                    case 's': count++;--i;break;
                    default: count++;
                }
            break;
            case '-':
                switch(str[i-1]){
                    case 'c': count++;--i;break;
                    case 'd': count++;--i;break;
                    default: count++;
                }
            break;
            case 'j':
                switch(str[i-1]){
                    case 'l': count++;--i;break;
                    case 'n': count++;--i;break;
                    default: count++;
                }
            break;
            default: count++;
        }
    }
    cout << count;
}