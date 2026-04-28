#include <stdio.h>
int main(void)
{
	int a, b, c, d, e, f;
	scanf("%x:%x:%x:%x:%x:%x", &a, &b, &c, &d, &e, &f);
	if ( a == 0xFF && b == 0xFF && c == 0xFF &&  d == 0xFF && e == 0xFF && f == 0xFF )
	{
		printf("BROADCAST\n");
	}
	else if ( a%2 == 0 )
	{
		printf("UNICAST\n");
	}
	else
	{
		printf("MULTICAST\n");
	}



	return 0;
}
