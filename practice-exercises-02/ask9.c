#include <stdio.h>
int main ()
{
    int x , y;
    double epit , apot;
    scanf("%d%d" , &x , &y);
    epit=((double)x/(x+y))*100;
    apot=100-epit;
    printf("Success Ratio: %.0f%%\n", epit);
    printf("Fail Ratio: %.0f%%" , apot);
    return 0;
}