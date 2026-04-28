#include <stdio.h>
int main(void)
{
	double x;
	scanf("%lf", &x);
	if ( x<=20 && x>=18)
	{
		printf("Excellent");
	}
	if ( x<18 && x>=16 )
	{
		printf("Very good");
	}
	if ( x<16 && x>=13 )
	{
		printf("Good");
	}
	if ( x<13 && x>=10 )
	{
		printf("Dangerous Zone");
	}
	if ( x<10 )
	{
		printf("Need Help");
	}
	return 0;
}
