#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n];
        long long s=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=(a[i]%k);
        }
        cout<<s%k<<endl;
    }
    return 0;
}