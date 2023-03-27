#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    /*bool isprime[10001];
    for(auto &i:isprime){
        i = 1;
    }
    isprime[0] = 0;
    isprime[1] = 0;
    int squx = sqrt(10001);
    for(int i=2; i<=squx; i++){
        if(isprime[i]==1){
            for(int j = i*i ; j<=10001 ; j+=i){
                isprime[j] = 0;
            }
        }
    }*/
    int num;
    while(cin >> num){
        for(int i = 2 ; i <= num ; i++){
            int times =0;
            while(num%i==0){
            times++;
            num/=i;   
            }
            if(times!=1 && num == 1){
                cout << i << "^" << times << endl;
            }
            if(times == 1 && num == 1){
                cout << i <<endl;
            }
            if(times == 1 && num !=1){
                cout << i << " * ";
            }
            if(times !=0 && times!= 1) {
                cout << i << "^" << times << " * ";
                }
            
        }

    }
    



    

}