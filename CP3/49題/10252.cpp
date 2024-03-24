#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
// sort用法 find用法 vector要在map之後創建 sort(cmp)的定義順序 
// a.first < b.first 小的優先度高 排在前面

bool cmp(pair<char, int> a, pair<char, int> b){
    return a.first < b.first;
}
int main(){
    
    string s1, s2;
    while(getline(cin, s1)){
          getline(cin, s2);
          map<char, int> m1, m2;
          for (int i = 0; i < s1.size(); i++)
          {
              m1[s1[i]]++;
        }
        for(int i = 0; i < s2.size(); i++){
            m2[s2[i]]++;
        }
        vector<pair<char, int>> v1(m1.begin(), m1.end());
        sort(v1.begin(), v1.end(), cmp);
        for(auto i : v1){
            auto it = m2.find(i.first);
            if(it != m2.end()){
                for(int j = 0; j < min(i.second, it->second); j++){
                    cout << i.first;
                }
            }
        }
        cout << "\n";
        v1.clear();
    }
    
}