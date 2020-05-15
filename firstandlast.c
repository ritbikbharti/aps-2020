#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,last,remainder=0;
		scanf("%d",&n);
		last=n%10;
		while(n>0)
		{
			remainder=n%10;
			n=n/10;
		}
		printf("%d\n",last+remainder);
	}
	return 0;
}