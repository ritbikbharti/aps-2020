#include<stdio.h>
#include<search.h>

int sortdsc(const void *, const void *);
int sortasc(const void *, const void *);
void qsort();

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int i;
		unsigned long long int N;
		scanf("%llu",&N);
		unsigned long long int a[N];

		for(i=0;i<N;i++)
		{
			scanf("%llu",&a[i]);
        }

        qsort(a, N, sizeof(unsigned long long int), sortdsc);

        for(i=0;i<N;i++)
        {
        	printf("%llu ",a[i]);
        }

        printf("\n");

        qsort(a, N, sizeof(unsigned long long int), sortasc);

        for(i=0;i<N;i++)
        {
        	printf("%llu ",a[i]);
        }

        printf("\n");
	}
	return 0;
}

int sortdsc(const void *p1, const void *p2)
{
    return(*(int*)p2 - *(int*)p1);
}

int sortasc(const void *p1, const void *p2)
{
    return(*(int*)p1 - *(int*)p2);
}