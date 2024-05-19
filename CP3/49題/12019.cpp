#include <iostream>
using namespace std;
// 2011/1/1禮拜六 以此類推即可
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    string Day[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (cases--)
    {
        int m, d;
        cin >> m >> d;
        int days = 0;
        for (int i = 0; i < m; i++)
        {
            days += Month[i];
        }
        int ans = (days + d - 1) % 7;
        cout << Day[ans] << endl;
    }
}