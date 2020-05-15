#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],d[n];
		int flag=0;
		int max=0;

		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++)
			cin>>d[i];

		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				if(a[1]+a[n-1]<d[i])
				{
					flag=1;
					if(d[i]>max)
						max=d[i];
				}
			}
			else if(i==(n-1))
			{
				if(a[n-2]+a[0]<d[n-1])
				{
					flag=1;
					if(d[i]>max)
						max=d[i];
				}
			}
			else
			{
				if(a[i+1]+a[i-1]<d[i])
				{
					flag=1;
					if(d[i]>max)
						max=d[i];
				}
			}
		}
		if(flag==1)
			cout<<max<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}