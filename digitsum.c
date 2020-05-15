#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c,sum=0;
        scanf("%d",&n);
        while(n>0)
        {
            c=n%10;
            n=n/10;
            sum=sum+c;
        }
        printf("%d\n",sum);
    }
    return 0;
}