#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;
typedef unsigned long long ull;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ull n,a,b,k;

		cin>>n>>a>>b>>k;

		ull x = (n/a) + (n/b) -  2*(n/boost::math::lcm(a,b));

		if(x>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
	return 0;
}

