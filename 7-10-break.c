#include <stdio.h>
int main(void)
{
	float length, width;
	printf("Vvedite dlinu pryamougolnika:\n");
	while(scanf("%f",&length)==1)
	{
		printf("Dlina = %0.2f:\n", length);
		printf("Vvedite shirinu pryamougolnika:\n");
		if(scanf("%f",&width)!=1)
			break;
		printf("Shirina = %0.2f:\n", width);
		printf("Ploshad' = %0.2f:\n", length * width);
		printf("Vvedite dlinu pryamougolnika:\n");
	}
	printf("Programma zavershena.\n");
	return 0;
}
	
