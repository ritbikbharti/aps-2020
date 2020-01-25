#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,k,n,flag=0;
        cin>>x>>y>>k>>n;
        int page=x-y;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i]>>b[i];
        for(int i=0;i<n;i++)
        {
            if (a[i]>=page && b[i]<=k)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
return 0;
}