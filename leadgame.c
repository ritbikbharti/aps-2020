#include<stdio.h>

int main()
{
	int r;
	int sum1=0,sum2=0,lead=0,win=0;
	scanf("%d",&r);
	while(r--)
	{
		int a=0,b=0;
		scanf("%d %d",&a,&b);
		sum1=sum1+a;
		sum2=sum2+b;
		if(sum1-sum2>lead)
		{
			lead=sum1-sum2;
			win=1;
		}
		else if(sum1-sum2<0 && sum2-sum1>lead)
		{
			lead=sum2-sum1;
			win=2;
		}
	}

	printf("%d %d\n",win,lead);

	return 0;
}