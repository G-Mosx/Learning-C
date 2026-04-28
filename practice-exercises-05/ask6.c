#include <stdio.h>
int main(void)
{
    int i=0;
    double a, b, step=0;
    printf("Enter miles");
    scanf("%lf%lf", &a, &b);
    printf("Enter step");
    scanf("%lf", &step);
    printf("MILES           KM\n");
    printf("-------------------\n");
    double y;
    for ( y=a; y<=b; y += step )
        {
            double km = y*1.6;
            printf("%.2lf   %.2lf\n", y,km);
        }




    return 0;
}