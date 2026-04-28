#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter cash in euro:");
    scanf("%d\n", &x);
    printf("%d\n", x/50);
    x = x%50;
    printf("%d\n", x/20);
    x = x%20;
    printf("%d\n", x/10);
    x = x%10;
    printf("%d\n", x/5);
    x = x%5;
    printf("%d\n", x/2);
    x = x%2;
    printf("1 euro", x);
    return 0;
}