#include <stdio.h>
int main(void)
{
	int N, i;
	double S=0;
	do
	{
		printf("Dwse enan peritto megalytero toy 3: ");
		scanf("%d", &N);
	}while( N<3 || N%2==0 );
	for ( i=3; i<=N; i = i+2 )
	{
		S= S + 1.0/((i-2)*i);
	}
	printf("%.3lf", S);




	return 0;
}
