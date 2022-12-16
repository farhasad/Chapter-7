#include <stdio.h>
int main(void)
{
	const float MIN=0.0f;
	const float MAX=100.0f;
	float score;
	float total = 0.0f;
	int n=0;
	float min=MAX;
	float max=MIN;
	printf("Vvedite rezultat pervoi igry (ili q dlya zaversheniya): ");
	while(scanf("%f", &score)==1)
	{
		if(score<MIN || score>MAX)
		{
			printf("%0.1f - nedopustimoe znachenie. Povtorite popytku: ", score);
			continue;
		}
		printf("Accepting %0.1f\n", score);
		min=(score<min) ? score : min;
		max=(score>max) ? score : max;
		total += score;
		n++;
		printf("Vvedite rezultat sleduyushei igry (ili q  dlya zaversheniya");
	}
	if(n>0)
	{
		printf("Srednee znachenie %d rezultatov ravno %0.1f\n", n, total/n);
		printf("Minimalnoe = %0.1f, maksimalnoe = %f\n", min, max);
	}
	else
		printf("Ne bylo vvedeno ni odnogo dopustimogo rezultata.\n");
	return 0;
}


