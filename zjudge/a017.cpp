#include<iostream>
#include<string>
#include<sstream>
#include<stack>
using namespace std;

int priority(char c){
    switch(c){
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/':
        case '%':
            return 2;
            break;
        default:
            return 0;
            break;

    }
}
string infixtoposfix(const string text){
    string val;
    stack<char> s;
    for(char c:text){
        if(isdigit(c)){
            val += c;
            //cout << c << " ";
        }
        else if(isspace(c)){
            continue;
        }
        else if(c == '('){
            s.push(c);
        }
        else if(c == ')'){
            while(!s.empty() && s.top() != '('){
                val += s.top();
                //cout << s.top() << " ";
                s.pop();
            }
            if(s.top() == '('){
                s.pop();
            }
        }
        else{
            while(!s.empty() && priority(s.top()) >= priority(c) ){
                val += s.top();
                s.pop();
            }
            s.push(c);
        }
    
        
    }
    while(!s.empty()){
        val += s.top();
        s.pop();
    }
    
    return val;
}
int main(){
    string text;
    while(getline(cin,text)){
        string posfix=infixtoposfix(text);
    //cout << posfix << " ";
    stack<long long int> s2;   

    for(char c : posfix){
        int a,b;
        if(c == '+'){
            a = s2.top();
            s2.pop();
            b = s2.top();
            s2.pop();
            s2.push(b+a);
        }
        else if(c == '-'){
            a = s2.top();
            s2.pop();
            b = s2.top();
            s2.pop();
            s2.push(b-a);
        }
        else if(c == '*'){
            a = s2.top();
            s2.pop();
            b = s2.top();
            s2.pop();
            s2.push(b*a);
        }
        else if(c == '/'){
            a = s2.top();
            s2.pop();
            b = s2.top();
            s2.pop();
            int num = (b/a);
            s2.push(num);

        }
        else if(c == '%'){
            a = s2.top();
            s2.pop();
            b = s2.top();
            s2.pop();
            
            s2.push(b%a);
            

        }
        else{
            s2.push(int(c)-48);
            
        }
    }
    cout << s2.top() << endl;
    s2.pop();
    }
    
}
