#include <stdio.h>
int main(void)
{
	int x, i;
	scanf("%d", &x);
	for ( i=0; i<x; i++ )
	{
		printf("* ");
	}
	printf("\n");
	while ( x>0 )
	{
		x--;
		for ( i=0; i<x; i++ )
		{
			printf("* ");
		}
		printf("\n");
	}



	return 0;
}
