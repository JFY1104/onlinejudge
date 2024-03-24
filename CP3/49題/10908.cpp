#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, q;
        cin >> m >> n >> q;
        cout << m << " " << n << " " << q << endl;
        char arr[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        while (q--)
        {
            int r, c;
            cin >> r >> c;
            int ans = 1;
            bool flag = true;
            while (r - ans >= 0 && r + ans < m && c - ans >= 0 && c + ans < n)
            {
                char ch = arr[r][c];
                for(int i = r - ans; i <= r + ans; i++)
                {
                    for(int j = c - ans; j <= c + ans; j++)
                    {
                        if(arr[i][j] != ch)
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag == false)
                    break;
                ans++;


            }
            cout << 2 * ans - 1 << endl;
        }
    }
}