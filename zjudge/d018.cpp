#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string text;
    stringstream s1; 
    while(getline(cin,text)){
        s1 << text;
        string sameline("");
        double oddsum = 0,evensum= 0 ;
        float ans;
        while(s1>>sameline){
            
            int position = sameline.find(":");
            if((sameline[position-1]%2) == 0){
                evensum += stod(sameline.substr((position+1)));
            }
            else if((sameline[position-1]%2 != 0)){
                oddsum += stod(sameline.substr((position+1)));
            }
           ans = oddsum-evensum;
        }
        cout << ans << endl;
        s1.str("");
        s1.clear();
        oddsum = 0;
        evensum = 0;
        ans = 0;
    }
}