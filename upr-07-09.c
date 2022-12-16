#include <stdio.h>
int main(void)
{
	int N;				// N - vvodimoe chislo 
	int p;				// p - proveryaemoe chislo, ot 1 do N;
	int i;				// i - proveryaemyi mnozhitel chisla p, ot 2 do p
	int t;				// t - flag prostogo chisla
	
	printf("Vvedenie chislo: \n");
	while(scanf("%d", &N)==1)
	{	
		printf("Dlya chisla: %d prostye chisla: \n", N);
		for(p=2;p<=N;p++)
		{
			t=0;		// predpolozhenie, chto p - prostoe chislo (t=0)
			for(i=2;i<p;i++)
				if(p%i==0)	//esli p na i delitsya bez osatatka, to p - sostavnoe chislo
				{
					t=1;
					break;
				}
			if(t==0)
				printf(" %d, ", p);
		}
	printf("\nVvedite novoe chislo:\n");
	}
	return 0;
}
	
