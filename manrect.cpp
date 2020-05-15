#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
typedef unsigned long long ull;

int main()
{
	int t,ans;
	cin>>t;
	while(t--)
	{
		ull in1,in2,in3,in4,x1,x2,y1,y2;
		cout<<"Q 0 0"<<endl;
		cin>>in1;
		cout<<"Q 0 "<<MAX<<endl;
		cin>>in2;
		cout<<"Q "<<MAX<<" 0"<<endl;
		cin>>in3;
		cout<<"Q 0 "<<(in1-in2+MAX)/2<<endl;
		cin>>in4;
		x1=in4;
		y1=in1 - x1;
		x2=MAX + y1 - in3;
		y2=MAX + x1 - in2;
		cout<<"A "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		cin>>ans;
		if(ans<0)
			break;
	}
	return 0;
}