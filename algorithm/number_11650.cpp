#include<iostream>
#include<algorithm>

using namespace std;

struct Point
{
    int x;
    int y;
};
bool cmp(Point a, Point b){
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

int main(){
    int N;
    cin >> N;
    Point points[N];
    for(int i = 0; i < N; i++){
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + N, cmp);
    
    for(int i = 0; i < N; i++){
        cout << points[i].x << " " << points[i].y << "\n";
    }
        
}