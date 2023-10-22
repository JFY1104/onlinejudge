#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string str;
    int flag=0;
    while(getline(cin,str)){
        vector<char>obj(str.begin(),str.end());
        
        for(auto it=obj.begin(); it != obj.end() ; it++){
            if(*it == '"' && flag ==0){
                *it = '`';
                obj.insert(it,'`');
                flag = 1;
            }
            if (*it == '"' && flag == 1)
            {
                *it = '\'';
                obj.insert(it, '\'');
                flag = 0;
            }
        }
        for(int i = 0; i < obj.size() ; i++){
            cout << obj[i];
        }
        obj.clear();        
    }
}