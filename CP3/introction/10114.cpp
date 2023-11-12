#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1, n4;           // duration in months of loans and depreciation record
    float n2, n3;         // down payment and amount of loan
    double md[101] = {0}; // record list
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

        double currentvalue = n3 + n2, currentd = md[0];
        currentvalue *= (1 - currentd);
        for (int j = 1; j <= 100; j++)
        {

            // cout << "n3 " << n3 << " "
            //      << "currentvalue " << currentvalue << "*cd " << currentd << endl;
            if (md[j] != 0)
            {
                currentd = md[j];
            }
            if (n3 < currentvalue)
            {
                if (j-1 == 1)
                {
                    cout << j-1 << " month" << endl;
                }
                else
                {
                    cout << j-1 << " months" << endl;
                }
                break;
            }
            n3 -= n2;
            currentvalue *= (1 - currentd);
        }
    }
}
// 30 500.0 15000.0 3
// 0 .10 1 .03 3 .002