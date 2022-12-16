#include <stdio.h>
#define PRICE_ARTICHOKE 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROTE 1.09
#define DISCOUNT 0.05
#define DISCOUNT_THRESH 100

void choose_vegetable(void);
int main(void)
{
	float M[4];
	M[1] = 0;
	M[2] = 0;
	M[3] = 0;
	float account = 0;
	char ch;
	choose_vegetable();
	while((ch=getchar())!='q')
	{
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
	}
	return 0;
}
void choose_vegetable(void)
{	
	printf("Mozhete sdelat zakaz:\n");
	printf("****************************************************************\n");
	printf("1) Artishoki\n");
	printf("2) Svekla\n");
	printf("3) Morkovka\n");
	printf("4) VYHOD\n");
	printf("****************************************************************\n");
}
