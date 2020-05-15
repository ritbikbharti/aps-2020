#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,temp;
        cin >> n;
        int a[n],sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int mean = sum/n;
        cout << mean <<endl;

        sort(a,a+n);

        int k;
        for(k=0;k<n;k++)
        {
            temp = sum - a[k];
            cout << temp;
            if((temp/n-1) == mean)
                cout << k+1;
        }

        //cout << k+1 <<endl;



    }
}