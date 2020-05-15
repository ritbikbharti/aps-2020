#include<bits/stdc++.h>
using namespace std;
//ritbikbharti

int main(){
    int t,countt;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>x1;
        vector<int>y1;
        long int a;
        vector<int> x2(100000000,0);
        vector<int> y2(100000000,0);
        int countx1=0,county1=0;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            if(a!=0)
            {x1.push_back(a);
            if(a<0)
            {x2[0-a]=1;	}    
            }
            if(a==0)
            {countx1++;}
        }
        for(int i=0;i<5;i++){
            if(countt>10)
            {x2[0-a]=2;}
        }

        int count=0;	
        for(int j=0;j<m;j++)
        {	
        cin>>a;	
        if(a!=0)
        {
        y1.push_back(a);
        if(a<0)
        {y2[0-a]=1;}
        }
        if(a==0)
        {county1++;}
        }

        int nn;
        for(unsigned int j=0;j<y1.size();j++)
        {
        a=pow(float(y1[j]),2);
        for(unsigned int k=0;k<x1.size();k++)
        {
        if(x1[k]>0)
        {	
            if(a%x1[k]==0)
            {
            nn = a/x1[k];
            if(nn<100000000)
            {
            if(x2[nn] == 1)
            {count++;}
            }}
        }
        if(countt==0)
        {x2[nn]==1;}
        }	}
        for(unsigned int j=0;j<x1.size();j++)
        {
        a=pow(float(x1[j]),2);
        for(unsigned int k=0;k<y1.size();k++)
        {
        if(y1[k]>0)
        {	
            if(a%y1[k]==0)
            {
            nn = a/y1[k];
            if(nn<100000000)
            {if(y2[nn] == 1)
            {count++;}
            }
            }
        }
        }	}
        if(countx1>0 || county1>0)
        {count = count + x1.size()*y1.size();}

        cout<<count<<endl;
    }

	return 0;
}
