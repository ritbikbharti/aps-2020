#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,r,x,i;
	scanf("%d %d",&n,&r);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x<r)
			printf("Bad boi\n");
		else
			printf("Good boi\n");
	}
	return 0;
}