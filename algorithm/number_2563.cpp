#include<iostream>

using namespace std;

struct Pos
{
    int x;
    int y;
};

int main(){
    int N;
    cin >> N;
    Pos pos;
    int areaCount = 0;
    int area[100][100] = {0,};
    for(int i = 0; i < N; i++){
        cin >> pos.x >> pos.y;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                if(!area[pos.y + j][pos.x + k]){
                    areaCount++;
                    area[pos.y + j][pos.x + k] = 1;
                    
                }
            }
        }
    }
    cout << areaCount;
}