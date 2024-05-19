#include <iostream>
using namespace std;
int sovle(int a)
{
    int ret = 0;
    while (a > 0)
    {
        ret += a % 10;
        a /= 10;
    }
    if (ret < 10)
        return ret;
    else
        return sovle(ret); //記得回傳ret
}
int main()
{
    int num;
    while (cin >> num && num)
    {
        cout << sovle(num) << endl;
    }
}