#include <stdio.h>
int main()
{
    int x , z;
    scanf("%d" , &x);
    z=(x/10*100)*11+(x%10)*11;
    printf("Diplasiasmos:%d",z);
    return 0;


}