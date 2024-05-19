#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2)) //用cin會讀不到空格
    {
        map<char, int> m1, m2;
        for (auto i : s1)
        {
            if (i != ' ')
                m1[i]++;
        }
        for (auto j : s2)
        {
            if (j != ' ')
                m2[j]++;
        }
        for (auto i : m1)
        {
            for (auto j : m2)
            {
                if (i.first == j.first)
                {
                    for (int k = min(i.second, j.second); k > 0; k--)
                    {
                        cout << i.first;
                    }
                }
            }
        }
        cout << endl;
    }
}