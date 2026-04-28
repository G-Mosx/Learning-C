#include <stdio.h>
int main(void)
{
	int N, S=0, i;
	do
	{
		printf("Dwse enan thetiko akeraio mikrotero tou 20");
		scanf("%d", &N);
	}while(N<=0 || N>=20);
	for( i=1; i<=N; i++ )
	{
		S = S + (2*i)*(2*i);
	}
	printf("%d\n", S);




	return 0;
}
