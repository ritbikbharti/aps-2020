#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int p1,p2,k,sum=0,r;
		scanf("%d %d %d",&p1,&p2,&k);
		sum=p1+p2;
		r = sum % (2*k);
		if(r < k)
			printf("CHEF\n");
		else if(r >= k)
			printf("COOK\n");
	}

	return 0;
}