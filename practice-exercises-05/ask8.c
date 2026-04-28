#include <stdio.h>
int main(void)
{
	int x, S=0, c=0;
	for ( c=0; S<100; c++ )
	{
		scanf("%d", &x);
		S=S+x;
	}
	printf("%d %d\n", S, c);




	return 0;
}
