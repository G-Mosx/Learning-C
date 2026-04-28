#include <stdio.h>
int main(void)
{
    int x, i, c=0;
    scanf("%d", &x);
    if (x>=10 && x<=20)
    {    
        for ( i=0; i<x; i++ )
        {  
            printf(" Ole");
        }
    }
    else
    {
        printf("Dwse 5 akeraious");
        for ( i=0; i<5; i++ )
        {
            scanf("%d", &x);
            if (x<0)
                c++;
        }
        printf("%d", c);
    }
    


    return 0;
}