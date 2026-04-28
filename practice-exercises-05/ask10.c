#include <stdio.h>
int main(void)
{
	int x, c=0, i;
	for ( i=0; i<10; i++ )
	{
		printf("Eisagete enan thetiko akeraio arithmo: ");
		scanf("%d", &x);
		while ( x<=0 )
		{
			c++;
			printf("Ksanagrapse ton arithmo: ");
			scanf("%d", &x);
		}
		
	
	}
	printf("Oi prospathies tou xristi htan: %d\n", c);





	return 0;
}
