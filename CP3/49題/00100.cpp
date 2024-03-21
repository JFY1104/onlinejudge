//  https: // zerojudge.tw/ShowProblem?problemid=c039
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);   
    cin.tie(0); 
    cout.tie(0);                    // 這三行是為了加速cin/cout 記得endl要改成\n
    int i, j;
    while (cin >> i >> j)
    {
        int mx = 0;
        for (int n = min(i, j); n <= max(i, j); n++)
        {
            int n1 = n, cnt = 1;
            while (n1 != 1)
            {
                if (n1 % 2)
                    n1 = 3 * n1 + 1;
                else
                    n1 /= 2;
                cnt++;
            }
            mx = max(mx, cnt);
        }
        cout << i << " " << j << " " << mx << "\n";
    }
    return 0;
}