#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	printf("Daite mne bukvu alfavita i ya ukazhu vam ");
	printf("Nazvanie zhivotnogo,\nnachinayusheisya s etoi bukvy.\n");
	printf("Vvedite bukvu ili # dlya zaversheniya.\n");
	while((ch=getchar())!='#')
	{
		if('\n'==ch)
			continue;
		if(islower(ch))
			switch(ch)
			{
			case 'a':
				printf("arhar, dikii gornyi aziatskii baran\n");
				break;
			case 'b':
				printf("babirussa, dikaya malaiskaya svin'ya\n");
				break;
			case 'k':
				printf("koati, nosuha obyknovennaya\n");
				break;
			case 'v':
				printf("vyhuhol', vodoplavayushee sushestvo\n");
				break;
			case 'e':
				printf("ehidna, igolchatyi murav'ed\n");
				break;
			case 'r':
				printf("rybolov, svetlo-korichnevaya kunitsa\n");
				break;
			default:
				printf("Vopros ozadachil!\n");
			}
		else
			printf("Raspoznayutsya tolko strochnye bukvy\n");

		while(getchar()!='\n')
			continue;
		printf("Vvedite sleduyushuyu bukvu ili # dlya zaversheniya\n");
	}
	printf("Do svidaniya!\n");
	return 0;
}

