#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("grapse tous 3 arithmous se fthinousa seira: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
		while ( a<b || b<c )
		{
			printf("Ksanagrapse tous arithmous se fthinousa seira: ");
			scanf("%d", &a);
			scanf("%d", &b);
			scanf("%d", &c);
		}
		printf("Congrats!\n");



	return 0;
}
