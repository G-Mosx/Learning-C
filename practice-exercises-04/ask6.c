#include <stdio.h>
int main(void)
{
	double cm, cost;	
	scanf("%lf", &cm);
	if ( cm<=30 )
	{
		cost = 10 + cm*0.6;
	}
	else if ( cm<=50 )
	{
		cost = 10 + 30*0.6 + (cm-30)*0.8;
	}	
	else if ( cm<=60 )
	{
		cost = 10 + 30*0.6 + 20*0.8 + (cm-50)*1;
	}
	else
	{
		cost = 10 + 30*0.6 + 20*0.8 + 10*1 + (cm-60)*1.2;
	}
	printf("%.2f\n", cost);
	return 0;
}
