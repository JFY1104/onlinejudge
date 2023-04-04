#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){
    map<char,string> m1{
        {'A',"10"}, {'B',"11"}, {'C',"12"}, {'D',"13"},
        {'E',"14"}, {'F',"15"}, {'G',"16"}, {'H',"17"},
        {'I',"34"}, {'J',"18"}, {'K',"19"}, {'L',"20"},
        {'M',"21"}, {'N',"22"}, {'O',"35"}, {'P',"23"},
        {'Q',"24"}, {'R',"25"}, {'S',"26"}, {'T',"27"},
        {'U',"28"}, {'V',"29"}, {'W',"32"}, {'X',"30"},
        {'Y',"31"}, {'Z',"33"}        
    };
    string str="";
    while(getline(cin,str)){
        int sum = 0;
        for(int i = 0 ; i < str.length() ; i++){
            
            if(i == 0){
                string num = m1[str[0]];
                sum += ((num[0]-'0') + (num[1]-'0')*9);
            }
            else if(i == (str.length()-1)){
                sum += (str[i]-'0');
            }
            else{
                sum += ((str[i]-'0')*(9-i));
            }
        }

        if(sum % 10 == 0){
            cout << "real" << endl;
        }
        else{
            cout << "fake" << endl;
        }
    }
    
}