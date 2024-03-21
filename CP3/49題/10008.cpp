#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
// https://blog.csdn.net/qian2213762498/article/details/81773289
// https://shengyu7697.github.io/std-sort/

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<char, int> m;
    
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while (n--)
    {
        getline(cin, s);
        for(auto &c : s){
            if(isalpha(c)){
                c = toupper(c);
                m[c] ++;
            }
        }
    }
    vector<pair<char, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    for (const auto &p : v)
    {
        std::cout << p.first << " " << p.second << "\n";
    }
}