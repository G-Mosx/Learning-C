#include <stdio.h>
int main(void)
{
	int hh, mm ,ss, ts, ls, lhh, lmm, lss;
	scanf("%d:%d:%d", &hh, &mm, &ss);
	ts = hh*3600 + mm*60 + ss;
	ls = 24 * 3600 - ts;
	lhh =  ls/3600;
	ls = ls % 3600;
	lmm = ls/60;
	lss = ls % 60;
	printf("%.2d:%.2d:%.2d\n", lhh, lmm, lss);



	return 0;
}
