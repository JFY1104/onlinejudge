#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI acos(0.0) * 2.0 //
// https://vjudge.net/problem/UVA-10221 
//https://a7069810.pixnet.net/blog/post/400813760-%5buva10221%5dsatellites
int main()
{
    double r, s, a;
    string unit;
    double chord, arc;
    r = 6440.0;
    while (cin >> s >> a >> unit)
    {
        if (unit == "min")
            a /= 60.0;
        if (a > 180.0)
            a = 360.0 - a;
        chord = (r + s) * cos((90.0 - a / 2.0) / 180.0 * PI) * 2.0; //弦長
        arc = 2.0 * PI * (r + s) * a / 360.0; //弧長
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
    return 0;
}