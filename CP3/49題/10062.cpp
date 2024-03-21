//  https: // zerojudge.tw/ShowProblem?problemid=c012
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
// sorty在algorithm庫 要記他的自訂義排序用法 以及vector pair的用法
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main(){
    
    string s;
    while (getline(cin, s))
    {
        map<char, int> m;
        for(auto c:s){
            m[c]++;
        }
        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), cmp);
        for(auto &p:v){
            cout << int(p.first) << " " << p.second << endl;
        }
    }
    
}