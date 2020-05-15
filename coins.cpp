#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull coins(ull n) { 
    if(n<12)
        return n;
    ull x,y,z;
    if(n/2<12)
        x=n/2;
    else
        x=coins(n/2);
    if(n/3<12)
        y=n/3;
    else
    	y=coins(n/3);
    if(n/4<12)
        z=n/4;
    else
        z=coins(n/4);
    if((x+y+z)>n)
    	return (x+y+z);
    else
    	return n;
}

int main() {
	ull n,sum;
	while(cin>>n)
	{
		cout<<coins(n)<<endl;
	}
	return 0;
}