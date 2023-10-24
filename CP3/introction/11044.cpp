#include <iostream>
#include <string>
#include <vector>
#include<sstream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++)
    {
        string str;
        vector<int> v;
        while (getline(cin,str))
        {
            int i;
            string s1;
            stringstream ss1;
            ss1 << str;
            while (ss1 >> i)
            {
                v.push_back(i);
            }
            if((v[0]-2)%3 == 0){
                v[0] = (v[0]-2) / 3;
            }
            else{
                v[0] = ((v[0]-2) / 3) + 1;
            }
            if((v[1]-2)%3 == 0){
                v[1] = (v[1]-2) / 3;
            }
            else{
                v[1] = ((v[1]-2) / 3) + 1;
            }
            cout << v[0] * v[1] << endl;
            v.clear();
            ss1.clear();
            ss1.str("");
        }

        
    }
}
