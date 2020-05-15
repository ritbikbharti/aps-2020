#include<stdio.h>
#include<stdlib.h>

int *array;

int cmp(const void *a, const void *b){
    int ia = *(int *)a;
    int ib = *(int *)b;
    return array[ia] < array[ib] ? -1 : array[ia] > array[ib];
}

int main()
{
	int n,m,i,j,k,temp;
	scanf("%d %d",&n,&m);

	int a[n],b[m],c[n],d[m];

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=i;
	}

	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		d[i]=i;
	}

	array = a;
	qsort(c, n, sizeof(*c), cmp);
	array = b;
	qsort(d, m, sizeof(*d), cmp);

	for(i=0;i<n;i++)
	{
		printf("%d %d\n",c[i],d[0]);
	}

	for(i=1;i<m;i++)
	{
		printf("%d %d\n",c[n-1],d[i]);
	}

	return 0;
}