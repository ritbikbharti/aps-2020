#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,array[1000000],result,result2,result3;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,number;
		scanf("%d",&n);

		printf("1 1 %d %d\n",n,n);
		fflush(stdout);

		scanf("%d",&result);
		array[0]=result;

		int k=1;

		for (i = 2; i <= n; i++)
		{
			number = i - 1;
            printf("1 %d %d %d\n",i,number,number);
            fflush(stdout);
            scanf("%d",&result2);
            array[k++]=result2;
        }

        printf("2 ");
        for(i=0;i<n;i++)
        {
        	printf("%d ",array[i]);
        }

        scanf("%d",&result3);

	}
	return 0;
}