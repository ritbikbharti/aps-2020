#include<bits/stdc++.h>
using namespace std;

long long power(int n)
{
    if(n==0)
    return 1;
    return power(n-1)*10;
}
int main() {
	int t,n,r;
	long long a,b,c,e,s,d,p;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    p=power(n);
	    cin>>a;
	    s=2*p+a;
	    cout<<s<<endl;
	    cin>>b;
	    c=p-b;
	    cout<<c<<endl;
	    cin>>d;
	    e=p-d;
	    cout<<e<<endl;
	    
	    cin>>r;
	}
	return 0;
}
