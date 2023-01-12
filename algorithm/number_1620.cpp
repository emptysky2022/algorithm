#include<iostream>
#include<map>
#include<string>
#include<sstream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M;
    map<string, int> encyclopedia;
    map<string, int>::iterator it;
    string name;
    std::stringstream ssInt;
    int tmp;
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> name;
        encyclopedia.insert({name, i+1});
    }
    for(int i = 0; i < M; i++){
        cin >> name;
        it = encyclopedia.find(name);
        if(it == encyclopedia.end()){
            ssInt<<name;
            ssInt >> tmp;
            if(!ssInt.fail()){
                for(auto const& e : encyclopedia){
                    if(e.second == tmp){
                        cout << e.first << "\n";
                    }
                }
            }
            ssInt.clear();
            ssInt.str("");
        }else{
            tmp = encyclopedia.at(name);
            cout << tmp << "\n";
        }
    }

}