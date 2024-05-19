#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}
int main()
{
    int cases;
    string s;
    cin >> cases;
    getline(cin, s);
    map<char, int> m;

    while (cases != 0)
    {
        getline(cin, s);
        for (auto &i : s)
        {
            if (isalpha(i))
            {
                i = toupper(i);
                m[i]++;
            }
        }
        cases--;
    }
    vector<pair<char, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    for (auto j : v)
    {
        cout << j.first << " " << j.second << endl;
    }
}