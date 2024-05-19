#include <iostream>
#include <cmath>
using namespace std;
//[a, b] 之間的「完全平方數」數目 = [ ceil( sqrt(a) ), floor( sqrt(b) ) ] 間有幾個正整數。
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b && a + b)
    {
        int n1 = sqrt(a);
        int n2 = sqrt(b);
        if (n1 * n1 != a)  //如果a不是完全平方數，則n1+1
            n1++;
        cout << n2 - n1 + 1 << "\n";
    }
    return 0;
}