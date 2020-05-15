#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,b,count=0,count1=0,flag=0,i;
		scanf("%d%d%d",&n,&a,&b);

		unsigned long long int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%llu",&arr[i]);
			if(arr[i]%a == 0)
				count++;
			if(arr[i]%b == 0)
			{
				if(arr[i]%a == 0)
				{
					flag=1;
					count1++;
				}
				else
					count1++;
			}
		}

		if(flag)
			count++;

		if(count && (count>count1))
			printf("BOB\n");
		else
			printf("ALICE\n");

	}
	return 0;
}