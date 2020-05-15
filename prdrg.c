#include<stdio.h>
#include<math.h>

int main()
{
	int t,i,n,num[25],den[25];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		num[0]=0;

		for(i=1;i<=25;i++)
		{
			if(i%2==0)
				num[i]=(num[i-1]*2)-1;
			else
				num[i]=(num[i-1]*2)+1;

			den[i]=pow(2,i);
		}

		printf("%d %d ",num[n],den[n]);
	}
}