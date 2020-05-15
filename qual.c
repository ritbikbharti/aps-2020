#include<stdio.h>
#include<search.h>
//josh coders
int sortdsc(const void *, const void *);
void qsort();
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int i,count=0;
        unsigned long long int N,K;
        scanf("%llu %llu",&N,&K);
        unsigned long long int a[N];

        for(i=0;i<N;i++)
        {
            scanf("%llu",&a[i]);
        }

        qsort(a, N, sizeof(unsigned long long int), sortdsc);

        for(i=0;i<N;i++)
        {
            if(a[i]>=a[K-1])
                count++;
        }

        printf("%d\n",count);


    }
    return 0;
}

int sortdsc(const void *p1, const void *p2)
{
    return(*(int*)p2 - *(int*)p1);
}