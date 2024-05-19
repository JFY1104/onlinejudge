#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b && a != 0 && b != 0)
    {
        int cnt = 0;
        int carry = 0;
        while (a > 0 || b > 0) // a or b 避免遇到像10 9999  這種情況
        {
            int temp = a % 10 + b % 10 + carry;
            if (temp >= 10) // >=10 craay就=1
            {
                carry = 1;
                cnt++;
            }
            else
            {
                carry = 0;
            }
            a = a / 10;
            b = b / 10;
        }

        if (cnt == 0)
            cout << "No carry operation." << endl;
        else if (cnt == 1)
            cout << "1 carry operation." << endl;
        else
            cout << cnt << " carry operations." << endl;
    }
}