#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int remainder,n,count=0;
		scanf("%d",&n);
		while(n>0)
		{
			remainder=n%10;
			if(remainder==4)
				count++;
			n=n/10;
		}
		printf("%d\n",count);
	}
	return 0;
}