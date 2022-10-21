#include<iostream>
#include<algorithm>

using namespace std;

struct Member
{
    int age;
    string name;
};

int cmp(Member m1, Member m2){
    return m1.age < m2.age;
}

int main(){
    int N;
    cin >> N;
    Member members[N];
    for(int i = 0; i < N; i++){
        cin >> members[i].age >> members[i].name;
    }
    stable_sort(&members[0], &members[N], cmp);
    for(Member m : members)
        cout << m.age << " " << m.name << "\n";
}