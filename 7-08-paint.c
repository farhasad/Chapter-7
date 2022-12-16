#include <stdio.h>
#define COVERAGE 350
int main(void)
{
	int sq_feet;
	int cans;
	printf("Vvedite kolichestvo kvadratnyh futov, kotorye neobhodimo pokrasit':\n");
	while(scanf("%d",&sq_feet)==1)
	{
		cans = sq_feet/COVERAGE;
		cans+=((sq_feet%COVERAGE)==0) ? 0 : 1;
		printf("Dlya etogo potrebuetsya %d %s.\n", cans, cans==1 ? "banka" : "banki");
		printf("Vvedite sleduyushee znachenie (ili q dlya zaversheniya):\n");
	}
	return 0;
}

