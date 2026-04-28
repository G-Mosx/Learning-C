#include <stdio.h>
int main(void)
{
	int x, i=0, temp=-9999, count=0;
	for ( i=0; i<10; i++ )
	{
		scanf("%d", &x);
		if ( x==temp+1 )
		{
			count++;
		}
		temp = x;
	
	
	}
	printf("%d\n", count);





	return 0;
}
