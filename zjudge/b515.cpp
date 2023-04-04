#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main(){
    map<string,char> m1={
        {".-",'A'}      ,   {"-...",'B'}    ,   {"-.-.",'C'}    ,   {"-..",'D'}     ,
        {".",'E'}       ,   {"..-.",'F'}    ,   {"--.",'G'}     ,   {"....",'H'}    ,
        {"..",'I'}      ,   {".---",'J'}    ,   {"-.-",'K'}     ,   {".-..",'L'}    ,
        {"--",'M'}      ,   {"-.",'N'}      ,   {"---",'O'}     ,   {".--.",'P'}    ,
        {"--.-",'Q'}    ,   {".-.",'R'}     ,   {"...",'S'}     ,   {"-",'T'}       ,
        {"..-",'U'}     ,   {"...-",'V'}    ,   {".--",'W'}     ,   {"-..-",'X'}    ,
        {"-.--",'Y'}    ,   {"--..",'Z'}
    };

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        stringstream s1;
        string code;
        while(getline(cin,code)){
            
            s1 << code;
            string alpha;
            while(s1 >> alpha){
                cout << m1[alpha];
            }
            s1.str("");
            s1.clear();
            cout << "\n";
        }
    }

}