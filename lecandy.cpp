#include<bits/stdc++.h>
using namespace std;


int main() {
int t;
cin >> t;
while(t--)
{
    int n,c,x=0;
    cin >> n >> c;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        x+=a[i];
    }
    if(c>=x) 
            cout<< "Yes" << endl;
    else
            cout<< "No" << endl;
}

return 0;
}