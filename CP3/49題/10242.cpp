#include <iostream>
#include <iomanip>
using namespace std;
// 解題方法

// 輸入的四個點中，重複的點一定是連接兩條邊的點，所以我們要找的是重覆的點的對角線的點，另外兩個不是重複的點，他們相連就是對角線。平行四邊形的對角線座標相加，會等於另一條對角線相加。

// 公式：不是重複的點+另一個不是重複的點=重複的點+要求的點。

// 所以只要把題目給的4個點先加起來，在減掉三次重複的點就是答案了。

// 公式：不是重複的點+另一個不是重複的點+(重複的點*2)=重複的點+要求的點+(重複的點*2)。
int main()
{
	int i,t;
	double x[4],y[4],ax,ay;
	
	while(cin>>x[0]>>y[0])//輸入測資 
	{
		ax=x[0];//全部的點相加 
		ay=y[0];//全部的點相加 
		
		for(i=1;i<4;i++)//輸入測資
		{
			cin>>x[i]>>y[i]; 
			ax+=x[i];//全部點相加 
			ay+=y[i];//全部點相加 
		}
		
		for(i=0;i<4;i++)
		{
			for(t=i+1;t<4;t++)
			{
				if(x[i]==x[t]&&y[i]==y[t])//找到一樣的點 
				{
					cout<<fixed<<setprecision(3);//精確到小數點下三位 
					cout<<ax-3*x[i]<<" ";//輸出x座標 
					cout<<ay-3*y[i]<<endl;//輸出y座標 
				}
			}
		}
	}
    return 0;
}