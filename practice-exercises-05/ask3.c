#include <stdio.h>
int main(void)
{
	int x1, x2, y1, y2, ep;
	scanf("%d/%d %d/%d %d", &x1, &x2, &y1, &y2 , &ep);
	switch (ep)
	{
	case 1:
		printf("Athroisma: %d/%d\n", x1*y2 + y1 * x2, x2*y2);
	break;
	case 2:
		printf("Aferaisi: %d/%d\n", x1*y2 - y1*x2, x2*y2);
	break;
	case 3:
		printf("Pollaplasiasmos: %d/%d\n", x1*y1, x2*y2);
	break;
	case 4:
		if ( y1==0 )
			printf("Den ginetai");
		else
		printf("Diairesh: %d/%d\n", x1 * y2, x2 * y1);
	break;		
	}
 return 0;
}
