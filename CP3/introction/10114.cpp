#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1, n4;
    float n2, n3;
    double md[101] = {0};
    while (cin >> n1 >> n2 >> n3 >> n4 && n1 >= 0)
    {
        for (int i = 0; i < n4; i++)
        {
            // 儲存每月的折舊率
            int month;
            double percent;
            cin >> month >> percent;
            md[month] = percent;
        }
        double currentd = md[0], currentvalue = n3 + n2;
        n3 += n2;
        int currentmonth = 0;
        for (int i = 0; i <= 100; i++)
        {
            if (n3 < currentvalue)
            {
                if (currentmonth == 1)
                {
                    cout << currentmonth - 1 << " month" << endl;
                }
                else
                {
                    cout << currentmonth - 1 << " months" << endl;
                }
                break;
            }
            if (md[i] != 0)
            {
                currentd = md[i];
            }
            n3 -= n2;
            currentvalue *= (1 - currentd);
            currentmonth += 1;
        }
    }
}