#include <stdio.h>
int main(void)
{
	double x, y, z;
	scanf("%lf%lf%lf", &x, &y, &z);
	(x > 100) ? printf("To x kostizei panw apo 100\n") : 0;
	(y>100) ? printf("To y kostizei panw apo 100\n") : 0;
	(z>100) ? printf("To z kostizei panw apo 100\n") : 0;
	( x<=100 && y<=100 && z<=100 ) ? printf("Kanena apo ta parapanw den kostizei panw apo 100\n") : 0;





	return 0;
}
