#include <stdio.h>
int main(void)
{
	int N, i, k=1, j=1, c=0;
	double S=0, last;
	do
	{
	scanf("%d", &N);
	}while(N<0);
	for (; S<N; )	
	{
			S = S + (5^k)/(3^j);
			last = S;
			k++;
			j++;
			c++;	
	}
	printf("%.2lf %d", last, c);


	return 0;
}
