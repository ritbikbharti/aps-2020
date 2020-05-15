#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ull a,ans=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			ans += (a - 1);
		}
		cout<<ans+1<<endl;
	}
	return 0;
}