
#include<iostream>
using namespace std;
int main(){
	int cases;
	int f[40];
	f[0] = 0;
	f[1] = 1;
	for(int i =2 ;i<40;i++){ //建立費氏數列
		f[i] = f[i-1]+f[i-2];
	}
	cin >> cases;
	while(cases--){
		int num;
		bool flag = false;
		cin >> num;
		cout << num << " = ";
		for(int i = 39;i>=2;i--){
			if(num >= f[i]){
				num = num-f[i];
				flag = true; //避免開頭為0
				cout << 1;
			}
			else if(flag){
				cout << 0;
			}
		}
		cout << " (fib)" << endl;
	}
}