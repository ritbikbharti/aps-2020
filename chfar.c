#include<stdio.h>
int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,a[100000],sum=0,sum1=0,count=0;
		scanf("%d %d",&n,&k);

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		int min=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}

		for(i=0;i<n;i++)
		{
			if(a[i] != min)
			{
				a[i]=min;
				count++;
			}
			if(count == k)
				break;
		}

		for(i=0;i<n;i++)
		{
			sum+=a[i]*a[i];
			sum1+=a[i];
		}

		if(sum<=sum1)
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;
}