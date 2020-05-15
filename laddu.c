#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int test;
	scanf("%d",&test);

	while(test--)
	{
		int i,activities,rank,severity,points=0;
		char act[20],origin[20];
		scanf("%d %s",&activities,origin);
		for(i=1;i<=activities;i++)
		{
			scanf("%s",act);
			if(strcmp(act,"CONTEST_WON")==0)
			{
				scanf("%d",&rank);
				if(rank<=20 && rank>0)
					points = points + 300 + (20 - rank);
				else
					points = points + 300;
			}
			else if(strcmp(act,"TOP_CONTRIBUTOR")==0)
				points = points + 300;
			else if(strcmp(act,"BUG_FOUND")==0)
			{
				scanf("%d",&severity);
				points = points + severity;
			}
			else if(strcmp(act,"CONTEST_HOSTED")==0)
				points = points + 50;
		}

		int ans=0;
		if(strcmp(origin,"INDIAN")==0)
			ans = points/200;
		else if(strcmp(origin,"NON_INDIAN")==0)
			ans = points/400;

		printf("%d\n",ans);

	}

	return 0;
}