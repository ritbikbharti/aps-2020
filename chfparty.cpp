#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			if(count>=arr[i])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}