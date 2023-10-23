#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string str;
    int flag=0;
    while(getline(cin,str)){
        vector<char> obj(str.begin(), str.end());
        // for (auto it = obj.begin(); it != obj.end(); it++)
        // {
        //     cout << *it;
        // }
        for(auto it=obj.begin(); it != obj.end() ; it++){
            
            if(*it == '"' && flag ==0){
                cout << '`' << '`';
                flag = 1;
            }
            else if (*it == '"' && flag == 1)
            {
                cout << "\'" << '\'';
                flag = 0;
            }
            else{
                cout << *it;
            }
        }
        obj.clear();        
    }
}