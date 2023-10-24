#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n1 = 0, n2 = 0;
        while (cin >> n1 >> n2)
        {
            if(n1 > n2){
                cout << ">" << endl;
            }
            else if (n1 < n2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
}