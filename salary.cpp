#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
    int n,k,count=0;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    while(v[0]!=v[n-1])
    {
        count++;
        v[n-1]-=1;
        sort(v.begin(),v.end());
    }

    cout<<count<<endl;
}

return 0;
}