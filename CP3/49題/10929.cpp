#include <iostream>
using namespace std;
int main()
{
    string num;
    while (cin >> num)
    {
        if (num == "0") //=="0" 字串比對
            break;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 == 0)   //誰是基數誰是偶數沒差
                even += num[i] - '0';
            else
                odd += num[i] - '0';
        }
        if ((odd - even) % 11 == 0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }
}