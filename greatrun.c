#include<stdio.h>

int main()
{
	int t,g[100],i,j,l,sl;
	int first,second;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&l,&sl);
		for(i=0;i<l;i++)
		{
			scanf("%d",&g[i]);
		}

		int max=0;
		for(i=0;i<l-sl+1;i++)
		{
			int sum=0;
			for(j=i;j<sl+i;j++)
			{
				sum=sum+g[j];
			}
			if(sum>max)
				max = sum;
		}

		printf("%d\n",max);
	}
	return 0;
}