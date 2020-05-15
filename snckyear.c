#include<stdio.h>
//joshcoders
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
			printf("HOSTED\n");
		else
			printf("NOT HOSTED\n");
	}
}