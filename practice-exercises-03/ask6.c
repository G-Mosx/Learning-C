#include <stdio.h>
int main()
{
     int x, telpos;
     scanf("%d", &x);
     telpos = x * (1 - 0.05*(x>=100));
     printf("%d", telpos);
     return 0;
}