#include <stdio.h>
int main()
{
    int x;
    scanf("%d" , &x);
    x=(x%10)*10+(x/10);
    printf("Antimetathesi:%d",x);
    return 0;

}