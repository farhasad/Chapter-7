#include <stdio.h>
void calculate(float SALARY_HOUR);
int choose_tariff (void); 
#define TIME_NORM 40 		// work hours at week
#define SALARY_HOUR_01 8.75		// $/hour for hours less TIME_NORM
#define SALARY_HOUR_02 9.33
#define SALARY_HOUR_03 10.00
#define SALARY_HOUR_04 11.20
#define K_OVERTIME_SALARY 1.5	//
#define TAXE_RATE_01 0.15	// %
#define INCOME_THRESH_01 300	// $, below it taxe rate is TAXE_RATE_01
#define TAXE_RATE_02 0.2	// %
#define INCOME_THRESH_02 450    // $
#define TAXE_RATE_03 0.25
int main(void)
{
	float SALARY_HOUR;
	int tariff;

	tariff = choose_tariff();
	while (tariff != 5)
	{	
		switch (tariff)
		{
			case 1:
				SALARY_HOUR = SALARY_HOUR_01;
				calculate(SALARY_HOUR);
				break;
			case 2:
				SALARY_HOUR = SALARY_HOUR_02;
				calculate(SALARY_HOUR);
				break;
			case 3: 
				SALARY_HOUR = SALARY_HOUR_03;
				calculate(SALARY_HOUR);
				break;
			case 4:
				SALARY_HOUR = SALARY_HOUR_04;
				calculate(SALARY_HOUR);
				break;
			default:
				printf ("Vvedite korrektnoe znachenie!");
				break;
		}
		tariff = choose_tariff();
	}
	return 0;
}


void calculate(float SALARY_HOUR)
{	float salary_gross;
	float time;
	float taxes;
	printf("Vvedite kolichestvo otrabotannyh chasov, 0 ili menshe - vyhod iz programmy: \n");
	scanf("%f", &time);
	if (time>0)
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

		printf("Nachisleniya: $%.2f, nalogi: $%.2f, na ruki: $%.2f\n\n", salary_gross, taxes, salary_gross - taxes);
	}
	else
		printf(" Vvodite korretnoe znachenie! \n \n");
}

int choose_tariff (void)
{	
	int tariff;
        printf("***************************************************************************\n");
        printf("Vvedite chislo, sootvetstvuyushee zhelayemoi tarifnoi setke ili deistviyu:\n");
        printf("1) $8.75/ch                          2) $9.33/ch                          \n");
        printf("3) $10.00/ch                         4) $11.20/ch                         \n");
        printf("5) Vyhod                                                                  \n");
        printf("***************************************************************************\n");
	scanf("%d", &tariff);
	return tariff;
}
