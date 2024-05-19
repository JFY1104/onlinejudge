//  https: // zerojudge.tw/ShowProblem?problemid=d226
#include <iostream>
using namespace std;
// 這個粒子在 2t 秒後所經過的位移 S(2t) = v0 * (2t) + a * (2t) ^ 2 / 2 = 2 *a *t ^ 2 = 2 * v * t
// t 秒後此粒子的速度為 v ，v = a * t
int main()
{
    int v, t;
    while (cin >> v >> t)
    {
        cout << 2 * v * t << "\n";
    }
    return 0;
}