#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ull i,n,positive=0,negative=0;
		cin>>n;
		ull a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>0)
				positive++;
			if(a[i]<0)
				negative++;
		}

		if(negative==0)
			negative=positive;
		if(positive==0)
			positive=negative;

		cout<<positive<<" "<<negative<<endl;
	}
	return 0;
}