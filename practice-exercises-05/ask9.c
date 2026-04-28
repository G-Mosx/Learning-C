#include <stdio.h>
int main(void)
{
	int x, prev, c=1;
	scanf("%d", &x);
	prev = x;
	while ( c<=100 )
	{
		scanf("%d", &x);
		if ( x>prev )
		{
			c++;
			break;
		}
		else
		{
			prev = x;
			c++;
		}
		
		
	}
	printf("%d\n", c);





	return 0;
}
