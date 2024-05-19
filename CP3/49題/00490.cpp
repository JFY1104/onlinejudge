//  https: // zerojudge.tw/ShowProblem?problemid=c045
#include <iostream>
using namespace std;
string s[105];  //s[1] 存第一行的字串 s[2] 存第二行的字串 以此類推
                //s[1][1] 存第一行的第一個字元 s[1][2] 存第一行的第二個字元 以此類推
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int col = 0, row = 0;
    while (getline(cin, s[col]))
    {
        row = max(row, (int)s[col].size());
        col++;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (i >= s[j].size())
                cout << " ";
            else
                cout << s[j][i];
        }
        cout << "\n";
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s1[101];
//     int row = 0;
//     int col = 0;

//     while (getline(cin, s1[row]))
//     {
//         if (s1[row].length() > col)
//             col = s1[row].length();
//         row++;
//     }
//     for (int j = 0; j < col; j++)
//     {
//         for (int i = row - 1; i >= 0; i--)
//         {
//             if (s1[i].length() > j)
//                 cout << s1[i][j];
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }