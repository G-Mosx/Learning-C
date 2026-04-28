#include <stdio.h>
int main(void)
{
	printf("Motosikleta = 1 , Autokinito = 2");
	int x, cc;
	double cost;
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("Kybismos?");
		scanf("%d", &cc);
		if ( cc<=100 )
		{
			printf("Poses meres?");
			int d;
			scanf("%d", &d);
			if ( d<=2 )
				cost = 30*d;
			else if ( d<=5 )
				cost = 25*d;
			else
				cost = 20*d;
		}
		else
		{
			printf("Poses meres?");
			int d;
			scanf("%d", &d);
			if ( d<=2 )
				cost = 40*d;
			else if ( d<=5 )
				cost = 35*d;
			else
				cost = 30*d;	
		}		
	break;
	case 2:
		printf("Kybismos?");
		scanf("%d", &cc);
		if ( cc<=1000 )
		{
			printf("Poses meres?");
			int d;
			scanf("%d", &d);
			if ( d<=2 )
				cost = 60*d;
			else if ( d<=5 )
				cost = 55*d;
			else
				cost = 50*d;
		}
		else
		{
			printf("Poses meres?");
			int d;
			scanf("%d", &d);
			if ( d<=2 )
				cost = 80*d;
			else if ( d<=5 )
				cost = 70*d;
			else
				cost = 60*d;
		}
	break;
	}
	printf("Thelete asfalish?, nai=1 oxi=2");
	int ap;
	scanf("%d", &ap);
	if ( ap==1 )
		cost = cost*1.05;
	printf("To kostos einai:%.2f", cost);
	return 0;
}
