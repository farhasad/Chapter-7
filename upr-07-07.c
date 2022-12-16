#include <stdio.h>
#define TIME_NORM 40 		// work hours at week
#define SALARY_HOUR 10		// $/hour for hours less TIME_NORM
#define K_OVERTIME_SALARY 1.5	//
#define TAXE_RATE_01 0.15	// %
#define INCOME_THRESH_01 300	// $, below it taxe rate is TAXE_RATE_01
#define TAXE_RATE_02 0.2	// %
#define INCOME_THRESH_02 450    // $
#define TAXE_RATE_03 0.25
int main(void)
{
	float time;
	float salary_gross;
	float taxes;

	printf("Vvedite kolichestvo otrabotannyh chasov, 0 ili menshe - vyhod iz programmy: ");
	scanf("%f", &time);
	
	while(time>0)
	{
		if(time<=TIME_NORM)
			salary_gross = SALARY_HOUR * time;
		else
			salary_gross = SALARY_HOUR * TIME_NORM + K_OVERTIME_SALARY * SALARY_HOUR * (time - TIME_NORM);
		
		if(salary_gross<=300)
			taxes = salary_gross * TAXE_RATE_01;
		else if((salary_gross > 300) && (salary_gross <=450))
			taxes = TAXE_RATE_01 * INCOME_THRESH_01 + TAXE_RATE_02 * (salary_gross - INCOME_THRESH_01);
		else 
			taxes = TAXE_RATE_01 * INCOME_THRESH_01 + TAXE_RATE_02 * (INCOME_THRESH_02 - INCOME_THRESH_01) + TAXE_RATE_03 * (salary_gross - INCOME_THRESH_02);

		printf("Nachisleniya: $%.2f, nalogi: $%.2f, na ruki: $%.2f\n", salary_gross, taxes, salary_gross - taxes);
		printf("Vvedite kolichestvo otrabotannyh chasov, 0 ili menee - vyhod iz programmy: ");
		scanf("%f", &time);
	}
	return 0;
}

