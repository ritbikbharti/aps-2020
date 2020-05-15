#include<stdio.h>
#include<string.h>

int main()
{
    int t,k,a,count,i;
    scanf("%d %d",&t,&k);
    count=0;
    while(t--)
    {
        i=0;
        scanf("%d",&a);
        if(a % k == 0)
            count++;
        i++;
    }

    printf("%d\n",count);
    return 0;
}