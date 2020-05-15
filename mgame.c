#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int n,p,m,value;
		scanf("%llu %llu",&n,&p);

		m = n % ((n/2) + 1);
		if(m)
			value = (p-n)*(p-n) + (p-n)*(p-m) + (p-m)*(p-m);
		else
			value = p*p*p;

		printf("%llu\n",value);

	}
}