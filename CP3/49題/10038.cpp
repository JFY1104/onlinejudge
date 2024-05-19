//  https: // zerojudge.tw/ShowProblem?problemid=d097
#include <iostream>
//#include <cstring>
using namespace std;
// abs在cmath
//簡單來說，就是要檢查1 ~n - 1的差值是否都存在，差值不一定要3->2->1，
//也可以是2->3->1，總而言之就是1 ~n - 1的差值都要存在就是Jolly了！


int main()
{

    int num;
    while (cin >> num)
    {
        if (num == 1) //只有一個就直接continue
        {
            int temp = 0;
            cin >> temp;
            cout << "Jolly" << endl;
            continue;
        }
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            arr[i] = 0;
        }
        int pre = 0, now = 0;
        cin >> pre;
        for (int i = 1; i < num; i++)
        {
            cin >> now;
            int a = abs(pre - now);
            if (a >= 1 && a < num) //記得加條件不然arr會有錯
                arr[a]++;
            pre = now;
        }
        bool flag = 1;
        for (int i = 1; i < num; i++)
        {
            if (arr[i] != 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}