#include <stdio.h>
int main()
{
    double X,Y,Z,temp;
    scanf("%lf%lf%lf",&X,&Y,&Z);
    temp=X;
    X=Z;
    Z=Y;
    Y=temp;
    printf("%f %f %f\n",X,Y,Z);
    return 0;

}