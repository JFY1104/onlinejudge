#include "title.h"
int main(){
    string val,day;
    getline(cin,day);
    for(int i =0 ;i <=4; i++){
        cout << day.substr(i,1) << endl;
    }
    
}