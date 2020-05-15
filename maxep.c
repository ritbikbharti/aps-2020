#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l=0,r,y,c,coins=1000,mid,temp;
    scanf("%d %d",&r,&c);
    while (l != r && coins<=1000 && coins>0 && l>=0)
    {
        mid = (l + r + 1) / 2;
        coins--;
        printf("1 %d\n", mid);
        fflush(stdout);

        scanf("%d",&y);
        if (y == 1)
        {
            printf("2\n");
            fflush(stdout);
            coins=coins-c;
            r = mid;
            temp=mid;
        }
        else if(y==0)
            l = mid;
        else if(y==-1)
            l = mid+1;
    }
    
    printf("3 %d\n", temp);
    fflush(stdout);

    return 0;
  
}