#include <stdio.h>
int main()
{
     int x, y;
     double px, py, p, kostos, resta;
     scanf("%d %lf %d %lf %lf", &x, &px, &y, &py, &p);
     kostos = x*px + y*py;
     resta = (p>=kostos) * (p-kostos);
     printf("%.2f", resta);
     return 0;
}