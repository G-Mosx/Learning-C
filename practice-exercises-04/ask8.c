#include <stdio.h>
int main(void)
{
	double x, fx;
	scanf("%lf", &x);
	if ( x<-5 )
	{
		fx = 8;
	}
	else if ( x>=-5 && x<3 )
	{
		fx = 1/x;
	}
	else if ( x>=3 && x<12 )
	{
		fx = x*x - 4;
	}
	else if ( x>=12 && x!=14 )
	{
		fx = 6/((x-14)*(x-14));
	}
	printf("%f\n", fx);



	return 0;
}
