#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned long int t;
	scanf("%lu",&t);
	while(t--)
	{
		int i,j,m,p,n,q,flag=0;
		scanf("%d",&n);
		int a[n],b[n];

		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}

		for(i=1;i<=n;i++)
		{
			
			for(j=i+1;j<=n;j++)
			{
				int k=0,c=0,count1=0;
				if(a[j] == a[i])
				{
					b[k++]=i;
					c++;
					b[k++]=j;
					c++;
				
					int count[c];

					for(p=0;p<c;p++)
					{
						for(m=1;m<=n;m++)
						{
							count[p]=0;
							if(b[p] == a[m])
							{
								count[p]++;
								count1++;
							}
							if(count[p]>=1)
								break;
						}
						if(count1>=2)
						{
							printf("Truly Happy\n");
							flag=1;
							break;
						}
					}

				}
				if(flag==1)
					break;
			}
			if(flag==1)
				break;

		}

		if(flag==0)
			printf("Poor Chef\n");

	}

	return 0;
}