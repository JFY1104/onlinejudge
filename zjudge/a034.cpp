#include<iostream>
#include<bitset>
#include<string>
#include<stack>
using namespace std;

int main(){
    int num = 0;    
    while(cin >> num){
        stack<int> s1;
        
        while(num>1){
            s1.push(num%2);
            
            num /= 2;    
        }
        s1.push(num);
        while(!s1.empty()){
            cout << s1.top();
            s1.pop();
        }
        cout << "\n";
    }
    
}