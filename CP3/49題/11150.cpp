#include <iostream>
using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        int ans = N;
        while (N >= 3)
        {
            ans += N / 3;
            N = N / 3 + N % 3;
        }
        ans += (N == 2);
        cout << ans << "\n";
    }
    return 0;
}