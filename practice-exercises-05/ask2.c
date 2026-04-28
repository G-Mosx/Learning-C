#include <stdio.h>
int main(void)
{
	int x, y, z, ep;
	scanf("%d%d%d%d", &x, &y, &z, &ep);
	switch(ep)
	{
	case 1:
		if ( x!=y && x!=z && y!=z )
			printf("Oi akeraioi einai diaforetikoi\n");
	break;
	case 2:
		if ( x==y || x==z || y==z )
			printf("Yparxoun dio akeraioi pou einai isoi\n");
	break;
	case 3:
		if ( x>=-5 && x<=5 )
		printf(" To x anikei sto -5,5\n");
		if ( y>=-5 && y<=5 )
		printf("To y anikei sto -5,5\n");
		if ( z>=-5 && z<=5 )
		printf("To z anikei sto -5,5\n");	
	break;
	}



	return 0;
}
