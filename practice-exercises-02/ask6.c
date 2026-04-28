#include <stdio.h>
int main()
{
    int X,Y,Z,W;
    scanf("%d.%d.%d.%d",&X,&Y,&Z,&W);
    printf("%d.%d.%d.%d\n", X, Y, Z, W - 1);
    printf("%d.%d.%d.%d\n", X, Y, Z, W + 1);
    return 0;
}