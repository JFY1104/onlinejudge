#include <iostream>
#include <map>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    map<string, int> m;
    while (cases--)
    {
        string s;
        cin >> s;
        m[s]++;
        cin >> s >> s; //人名忽略
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}