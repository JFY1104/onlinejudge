#include <iostream>
using namespace std;
int main()
{
    char table[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;

    while (getline(cin, s))
    {
        for (auto a : s)
        {
            if (a == ' ')
                cout << " ";
            else
            {
                for (int i = 0; i < sizeof(table); i++)
                {
                    if (isalpha(a)) //小心大寫要轉小寫
                        a = tolower(a);
                    if (a == table[i])
                        cout << table[i - 2];
                }
            }
        }
        cout << "\n";
    }
}