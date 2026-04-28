#include <stdio.h>
int main(void)
{
	int mik,meg;
	double cost;
	scanf("%d%d", &mik, &meg);
	cost = mik*0.008 + meg*0.02;
	if ( cost>600 )
	{
		cost = cost - (cost*20.0/100.0);
	}
	else if ( cost>200 || mik+meg>=3000 )
	{
		cost = cost - (cost*8.0/100.0);
	}
	printf("%.2f\n", cost);
	return 0;
}
