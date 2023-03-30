#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string text;
    stringstream s1;
    string c;
    
    int a,b;
    while(getline(cin,text)){
        stack<long int> s;
        s1<<text;
        while(s1>>c){
            if(c == "+"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(b+a);
            }
            else if(c == "-"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(b-a);
            }
            else if(c == "*"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(b*a);
            }
            else if(c == "/"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(b/a);
            }
            else{
                //cout << c << " ";
                s.push(stoi(c));
            }
        }
        cout << s.top() << endl;

        
    }
    
}
