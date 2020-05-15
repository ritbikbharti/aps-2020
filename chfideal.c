#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int printRandoms(int lower, int upper, int count) 
{ 
    int i; 
    for (i = 0; i < count; i++)
    { 
        int num = (rand() % (upper - lower + 1)) + lower; 
        return num;
    } 
}

int main()
{
	int x,y,z;
	srand(time(0)); 
	x=printRandoms(1,3,1);
	if(x==1)
	{
		printf("%d\n",x);
		fflush(stdout);
		scanf("%d",&y);
		fflush(stdin);
		if(y==2)
		{
			printf("3\n");
			fflush(stdout);
		}
		else
		{
			printf("2\n");
			fflush(stdout);
		}
	}
	else if(x==2)
	{
		printf("%d\n",x);
		fflush(stdout);
		scanf("%d",&y);
		fflush(stdin);
		if(y==3)
		{
			printf("1\n");
			fflush(stdout);
		}
		else
		{
			printf("3\n");
			fflush(stdout);
		}
	}
	else if(x==3)
	{
		printf("%d\n",x);
		fflush(stdout);
		scanf("%d",&y);
		fflush(stdin);
		if(y==2)
		{
			printf("1\n");
			fflush(stdout);
		}
		else
		{
			printf("2\n");
			fflush(stdout);
		}
	}
	return 0;
}