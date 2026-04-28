#include <stdio.h>
int main()
{
    int x;
    scanf("%d" , &x);
    printf("%dh" ,x/3600);
    x=x%3600;
    printf("%dm" ,x/60);
    x=x%60;
    printf("%ds\n" ,x);
    return 0;

}