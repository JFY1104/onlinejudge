//   https: // zerojudge.tw/ShowProblem?problemid=a134
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> fib;
    int f0 = 0, f1 = 1, f2 = 1;
    for (; f2 <= 1e8;) // 將費氏數列存入vector fib 由小到大排序
    {
        f2 = f0 + f1;
        fib.push_back(f2);
        f0 = f1;
        f1 = f2;
    }
    reverse(fib.begin(), fib.end()); // 將vector fib 由大到小排序
    int N, n, x;
    cin >> N;
    while (N--)
    {
        cin >> n;
        x = n;
        vector<int> ans;
        int i = 0;
        while (fib[i] > x) // 找到費氏數列中第一個小於n的數字
            i++;
        for (; i < fib.size(); i++) 
        {
            if (fib[i] <= x) // 由大到小扣除費氏數列中的數字
            {
                x -= fib[i];
                ans.push_back(1);
                i++;
                if (i < fib.size())
                    ans.push_back(0);
            }
            else
                ans.push_back(0);
        }
        cout << n << " = ";
        for (auto j : ans)
            cout << j;
        cout << " (fib)\n";
    }
    return 0;
}