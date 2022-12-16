#include <stdio.h>
void calculate(float THRESH);
int choose_category (void); 
#define TAXE_RATE_01 0.15	// %
#define TAXE_RATE_02 0.28	// %
#define THRESH_01 17850    // $
#define THRESH_02 23900
#define THRESH_03 29750
#define THRESH_04 14875

int main(void)
{
	float THRESH;
	int category;
	category = choose_category();
	while (category != 5)
	{	
		switch (category)
		{
			case 1:
				calculate(THRESH_01);
				break;
			case 2:
				calculate(THRESH_02);
				break;
			case 3: 
				calculate(THRESH_03);
				break;
			case 4:
				calculate(THRESH_04);
				break;
			default:
				printf ("Vvedite korrektnoe znachenie!\n");
				break;
		}
		category = choose_category();
	}
	return 0;
}


void calculate(float THRESH)
{	float salary;
	float time;
	float taxes;
	printf("Vvedite Vash oblagaemyi dohod: \n");
	scanf("%f", &salary);
	if (salary>0)
	{
		if(salary<=THRESH)
		{
			taxes = salary * TAXE_RATE_01;
			printf("Nalog sostavit: %.2f * %.2f = %.2f\n", salary, TAXE_RATE_01, taxes);
		}
		else
		{	
			taxes = THRESH * TAXE_RATE_01 + (salary - THRESH) * TAXE_RATE_02;
			printf("Nalog sostavit: %.2f * %.2f + (%.2f - %.2f)* %.2f = %.2f\n", THRESH, TAXE_RATE_01, salary, THRESH, TAXE_RATE_02, taxes);
		}
	}
	else
		printf(" Vvodite korretnoe znachenie! \n \n");
}

int choose_category (void)
{	
	int category;
        printf("***************************************************************************\n");
        printf("Vvedite chislo, sootvetstvuyushee zhelayemoi nalog.kategorii ili deistviyu:\n");
        printf("1) Odinokii                          2) Glava sem'i                          \n");
        printf("3) V brake, sovmestn hoz-vo          4) V brake, razdeln hoz-vo              \n");
        printf("5) Vyhod                                                                  \n");
        printf("***************************************************************************\n");
	scanf("%d", &category);
	return category;
}
