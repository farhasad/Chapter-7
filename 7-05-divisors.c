#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	bool isPrime;
	printf("Vvedite celoe chislo dlya analiza;");
	printf("dlya zaversheniya vvedite q.\n");
	while(scanf("%lu", &num)==1)
	{
		for(div=2,isPrime=true;(div*div)<=num;div++)
		{
			if(num%div==0)
			{
				if((div*div)!=num)
					printf("%lu delitsya na %lu i %lu.\n",num,div,num/div);
				else
					printf("%lu delitsya na %lu.\n", num, num/div);
				isPrime = false;	//chislo ne yavlyaetsya prostym
			}
		}
		if(isPrime)
			printf("%lu yavlyaetsya prostym chislom.\n", num);
		printf("Vvedite sleduyushee chislo dlya analiza;");
		printf("dlya zaversheniya vvedite q.\n");
	}
	printf("Do svidaniya!\n");
	return 0;
}
			
