#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string str;
    stringstream s1;
    while (getline(cin, str))
    {
        int degree = 0;
        int process = 0;
        vector<int> v;
        if (str == "0 0 0 0")
            break;
        s1 << str;
        while (s1 >> process)
        {
            v.push_back(process);
        }

        if (v[0] < v[1])
        {
            degree += (v[0] - v[1] + 40) * 9;
        }
        else
        {
            degree += (v[0] - v[1]) * 9;
        }
        if (v[1] < v[2])
        {
            degree += (v[2] - v[1]) * 9;
        }
        else
        {
            degree += (v[2] - v[1] + 40) * 9;
        }
        if (v[2] < v[3])
        {
            degree += (v[2] - v[3] + 40) * 9;
        }
        else
        {
            degree += (v[2] - v[3]) * 9;
        }
        degree += 1080;
        cout << degree << endl;
        v.clear();
        s1.clear();
        s1.str("");
    }
}