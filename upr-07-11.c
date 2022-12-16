#include <stdio.h>
#define PRICE_ARTICHOKE 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROTE 1.09
#define DISCOUNT 0.05
#define DISCOUNT_THRESH 100
#define DELIVERY_PRICE_1 6.5
#define DELIVERY_THRESH_1 5
#define DELIVERY_PRICE_2 14.0
#define DELIVERY_THRESH_2 20.0
#define DELIVERY_PRICE_3 0.5


void choose_vegetable(void);
int main(void)
{
	float M[4];
	M[1] = 0;
	M[2] = 0;
	M[3] = 0;
	float account = 0;
	float discount = 0;
	float mass = 0;
	float delivery;
	char ch;
	choose_vegetable();
	while((ch=getchar())!='q')
	{	if('\n'==ch)
			continue;
		switch (ch)
		{
			case 97 : 
				printf("Skolko artishokov, v funtah? \n");
				scanf("%f",&M[0]);
				M[1]=M[1]+M[0];
				printf("Vsego vybrano %.2f funtov artichokov\n", M[1]);
				break;
			case 98 : 
				printf("Skolko svekly, v funtah? \n");
				scanf("%f", &M[0]);
				M[2]=M[2]+M[0];
				printf("Vsego vybrano %.2f funtov svekly\n", M[2]);
				break;
			case 99 : 
				printf("Skolko morkovi, v funtah?\n");
				scanf("%f", &M[0]);
				M[3]=M[3]+M[0];
				printf("Vsego vybrano %.2f funtov morkovi\n", M[3]);
				break;
			default : 
				printf("NE korrektno!\n");
				break;
		}
		while(getchar()!='\n')
			continue;
	}

	account = M[1]*PRICE_ARTICHOKE + M[2]*PRICE_BEET + M[3]*PRICE_CARROTE;

	if(account >=DISCOUNT_THRESH)
	{
		discount = account * DISCOUNT;
	}
	else
		discount = 0;

	mass = M[1] + M[2] + M[3];

	if ((mass>0)&&(mass<=DELIVERY_THRESH_1))
		delivery = DELIVERY_PRICE_1;
	else if ((mass>DELIVERY_THRESH_1)&&(mass<=DELIVERY_THRESH_2))
		delivery = DELIVERY_PRICE_2;
	else 
		delivery = DELIVERY_PRICE_3*(mass - DELIVERY_THRESH_2);
	
	printf("\nVy vybrali tovarov na: $%.2f, \nSkidka sostavlyaet: $%.2f, \nDostavka: $%.2f, \nITOGO: $%.2f\n", account, discount, delivery, account-discount+delivery); 
	
	printf("Zakazano artishokov po $%.2f/funt - %.2f funtov na summu:$%.2f\n", PRICE_ARTICHOKE, M[1], PRICE_ARTICHOKE*M[1]);
	printf("Zakazano svekly po $%.2f/funt - %.2f funtov na summu:$%.2f\n", PRICE_BEET, M[2], PRICE_BEET*M[2]);
	printf("Zakazano morkovki po $%.2f/funt - %.2f funtov na summu:$%.2f\n", PRICE_CARROTE, M[3], PRICE_CARROTE*M[3]);
	printf("Obshaya stoimost zakaza: $%.2f\n", account);
	printf("Rasschitannaya skidka: $%.2f\n", discount);
	printf("Zatraty na dostavku: $%.2f\n", delivery); 
	printf("Itogovaya summa zakaza: $%.2f\n", account-discount+delivery);
	return 0;
}
void choose_vegetable(void)
{	
	printf("Mozhete sdelat zakaz:\n");
	printf("****************************************************************\n");
	printf("a) Artishoki\n");
	printf("b) Svekla\n");
	printf("c) Morkovka\n");
	printf("q) VYHOD\n");
	printf("****************************************************************\n");
}
