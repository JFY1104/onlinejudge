#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    getline(cin, s);
    while (n--)
    {
        getline(cin, s);
        stringstream ss(s); // stringstream可以 只使用一次 表示只儲存國家
        ss >> s;
        mp[s]++;
    }
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}