#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string num = "";
    while(cin >> num){
        reverse(num.begin(),num.end());
        if(num[0] == '0'){   
            if(num.size() == 1){
                cout << '0' << endl;
                continue;
            }
            else{
            for(int i = 0 ; i < num.size() ; i++){
                if(num[i] != '0'){
                    cout << num.substr(i) << endl;
                    break;
                }
            }}
        }

        else{
            cout << num << endl;
        }
        num = "";
        
    }
}