#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,q,k,i,j,m,temp;
	scanf("%d %d %d",&n,&q,&k);
	int arr[n];
	char chara[q],ch;

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	getchar();

	for(i=0;i<q;i++)
		scanf("%c",&chara[i]);

	for(i=0;i<q;i++)
	{
		ch=chara[i];
		if(ch == '!')
		{
			temp=arr[n-1];
    		for(j=n-1;j>0;j--)
    		{
        		arr[j]=arr[j-1];
    		}
    		arr[0]=temp;
		}
		else
		{
			int count=0;
        	int max=0;
        	for(m=0;m<n;m++)
        	{
          		if(arr[m]==0)
            		count=0;
          		else
          		{
            		count++;
            		if(count>max)
           			 	max=count;
          		}
        	}
        	if(max<=k)
        		printf("%d\n",max);
        	else
        		printf("%d\n",k);
		}
	}

	return 0;
}