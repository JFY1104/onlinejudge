#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    /*
    for(int i=0; i <str.length();i++){
        str[i]....
    } 
    等於下面  
    for(auto i:str){    //複製str字串在遍歷
    } 
    */
    for(auto &i:str){   //直接引用原字符遍歷
        cout << i;
    }
    //cout << str;
    
}