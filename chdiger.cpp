#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		ull N,d,x;
		vector <int> V;
		cin>>N>>d;

		while(N>0)
		{
			i=0;
			x=N%10;
			if(x>d)
				V.insert(V.begin()+i,d);
			else
				V.insert(V.begin()+i,x);
			N=N/10;
			i++;
		}

		sort(V.begin(),V.end());

		ull ans=0;

		for(int i=0;i<V.size();i++)
		{
			ans=ans*10;
			ans=ans+V[i];
		}

		cout<<ans<<endl;
	}

	return 0;
}