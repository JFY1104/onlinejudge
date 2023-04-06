#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string origin;
    while(getline(cin,origin)){
        string after = origin;
        reverse(after.begin(),after.end());
        if(origin == after){
            cout << "yes" <<endl;
        }
        else{
            cout << "no" << endl;
        }
        origin = "";
    }

}