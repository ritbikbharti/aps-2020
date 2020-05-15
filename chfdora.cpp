#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,i,j,ans=0;
	cin>>t;
	while(t--) {
	    cin>>n>>m;
	    int a[n][m];
	    ans=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	             int x=1;
	             while(((i-x>=0)&&(j-x>=0)&&(i+x<n)&&(j+x<m))&&a[i+x][j]==a[i-x][j]&&a[i][j+x]==a[i][j-x])
	             x++;
	             ans+=x;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
