#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string num;
    while(getline(cin,num)){
        reverse(num.begin(),num.end());
        stringstream s1;
        int ans = 0;
        s1 << num;
        s1 >> ans;
        cout << ans << endl;
        s1.str("");
        s1.clear();
    }
}