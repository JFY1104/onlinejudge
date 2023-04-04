
#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string text;
    stringstream s1;
    while(getline(cin,text)){
        string str;
        s1 << text;
        int ans = 0;
        while(s1 >> str){
            int flag = 0;
            for(char c : str){
                
                if(!isdigit(c)){
                    flag = 1;
                }

            }
            if(flag == 0){
                //cout << str << " ";
                ans += stoi(str);
            }
        }
        s1.str("");
        s1.clear();
        cout << ans << endl;
        
    }
}