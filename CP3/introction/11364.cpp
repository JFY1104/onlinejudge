#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int n1;
    cin >> n1 ;
    int min=0, max=0;
    for (int i = 0; i < n1;i++){
        int n2;
        cin >> n2;
        for (int j = 0; j < n2;j++){
            
            int temp;
            cin >> temp;
            if(j == 0)
                min = max = temp;
            else{
                if(temp<min){
                    min = temp;
                }
                if(temp>max){
                    max = temp;
                }
            }
        }
        cout << (max - min) * 2 << endl;
    }
}