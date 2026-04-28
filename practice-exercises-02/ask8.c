#include <stdio.h>
int main()
{
    int x , y , dad , child;
    scanf("%d%d",&x , &y);
    dad = x-y;
    child=dad;
    dad=child*2;
    printf("%d\n%d", dad, child);
    return 0;
}