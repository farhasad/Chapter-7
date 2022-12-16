#include <stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("Vvedite spisok minimalnyh dnevnyh temperatur.\n");
	printf("Ispolzuite shkalu Celsiya; dlya zaversheniya vvedite q.\n");
	while(scanf("%f",&temperature)==1)
	{
		all_days++;
		if(temperature<FREEZING)
			cold_days++;
	}
	if(all_days!=0)
		printf("%d - obshee kolichestvo dnei: %f%% s temperaturoi nizh nulya.\n",all_days,100.0*(float)cold_days/all_days);
	if(all_days==0)
		printf("Dannye ne vvedeny!\n");
	return 0;
}

