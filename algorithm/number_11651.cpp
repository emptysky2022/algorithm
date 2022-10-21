#include<iostream>
#include<algorithm>

using namespace std;

struct Point
{
    int x;
    int y;
};

int cmp(Point a, Point b){
    if(a.y == b.y){
        return a.x < b.x;
    }
    return a.y < b.y;
}

int main(){
    int N;
    cin >> N;
    Point points[N];

    for(int i = 0; i < N; i++){
        cin >> points[i].x >> points[i].y;
    }
    sort(&points[0], &points[N], cmp);
    for(Point p : points)
        cout << p.x << " " << p.y << "\n";
}