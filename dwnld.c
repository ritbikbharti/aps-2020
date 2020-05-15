#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,k,m[100],d[100];
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&m[i],&d[i]);
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			if(k >= m[i])
				k=k-m[i];
			else
			{
				m[i]=m[i]-k;
				k=0;
				sum=sum + m[i]*d[i];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}