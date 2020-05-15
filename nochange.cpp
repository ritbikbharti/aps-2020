#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long n, p;
        cin>>n>>p;
        long d[n];
        long ans[n];
        int flag=0,z,q;

        for(int i=0;i<n;i++){
            cin>>d[i];
            if(p%d[i]!=0){
                flag=1;
            }
        }

        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(p%d[i]!=0){
                    q = p/d[i];
                    ans[i]=q+1;
                    z=i;
                    break;
                }
                else{
                    ans[i]=0;
                }
            }
            cout<<"YES";
            for(int i=0;i<=z;i++)
                cout<<" "<<ans[i];
            for(int i=z+1;i<n;i++)
                cout<<" "<<0;
            cout<<endl;
        }

    }
}