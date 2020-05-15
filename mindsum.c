#include<stdio.h>

int sum1, sum;

int digitsum(int N)
{
    while (N > 0)
    {
        sum += N % 10;
        N /= 10;
    }

    sum1 = sum;
    sum = 0;
    return sum1;
}

int main()
{
	unsigned long long int N,D,f;
	int a,t;
	int count=1;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		count=1;
		scanf("%llu %llu",&N,&D);

		if(N == 1){
			printf("1 0\n");
			continue;
		}
		else if(N == 10 || N == 100 || N == 1000 || N == 10000 || N == 100000 || N == 1000000 || N == 10000000 || N == 100000000 || N == 1000000000 || N == 10000000000 || N == 100000000000 ){
			printf("1 1\n");
			continue;
		}
		else if(digitsum(N) == 10 || digitsum(N) == 100 || digitsum(N) == 1000 || digitsum(N) == 10000 || digitsum(N) == 100000 || digitsum(N) == 1000000 ){
			printf("1 2\n");
			continue;
		}
		else
		{
			a=N+D;
			while(digitsum(a) > digitsum(N))
			{
				N=a;
				a+=D;
				count++;
			}
			if(digitsum(N) >= 10)
			{
				f=digitsum(N);
				printf("%d %d\n",digitsum(f),count+1);
			}
			else
				printf("%d %d\n",digitsum(a),count+1);

		}
	}
}