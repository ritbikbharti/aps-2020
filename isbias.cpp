#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,q,i,l,r,up,down,ch;
	cin>>n>>q;
	long long* a=new long long[n];
	int* ans=new int[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	ans[0]=0;ans[1]=0;
	if(a[1]>a[0])
	    ch=1;
	else
	    ch=0;
	for(i=2;i<n;i++)
	{
	    ans[i]=ans[i-1];
	    if(a[i]>a[i-1]&&(ch!=1))
	        {
	            ans[i]++;
	            ch=1;
	        }
	        else if(a[i]<a[i-1]&&(ch!=0))
	        {
	            ans[i]++;
	            ch=0;
	        }
	}

	while(q--)
	{
	    cin>>l>>r;
	    if((ans[r-1]-ans[l])%2==1)
	        cout<<"YES\n";
	       else
	       cout<<"NO\n";
	}

	return 0;
}