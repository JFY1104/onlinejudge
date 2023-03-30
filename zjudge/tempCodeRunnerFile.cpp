#include<iostream>
#include<stack>
#include<string>
using namespace std;

int presedence(const char op){
    switch(op){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

string InfixToPostfix(const string term){
    stack<char> s;
    string output;
    for(char c : term){
        if(isalpha(c)){
            output += c;
        }
        else if(c == '('){
            s.push(c);    
        }
        else if(c == ')'){
            while(!s.empty() && s.top()!='('){
                output += s.top();
                s.pop();

            }
            if(!s.empty() && s.top()=='('){
            s.pop();
            }
        }
        else if(c == " "){
            continue;
        }
        else{
            while(!s.empty() && presedence(s.top()) >= presedence(c) ){
                output += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty()){
        output += s.top();
        s.pop();
    }
    return output;
}

int main(){
    string text;
    while(getline(cin,text)){
        string result=InfixToPostfix(text);
        for(char c : result){
        cout << c << " ";
    }
    }
    
}