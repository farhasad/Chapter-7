#include <stdio.h>
int main(void)
{	int N;
	int t;
	int k_ch = 0;
	int k_nch = 0;
	int summ_ch = 0;
	int summ_nch = 0;

	printf("Vvedote celye chisla do 0:\n");
	t=scanf("%d", &N);
	while((t!=0)&&(N!=0))
	{
		if(N%2==0)
		{
			k_ch++;
			summ_ch+=N;
		}
		else
		{
			k_nch++;
			summ_nch+=N;
		}
		t = scanf("%d", &N);
	}
	printf("Chetnyh chisel: %d, srednee: %f\n", k_ch, (float) summ_ch / k_ch);
	printf("Nechentnyh chisel: %d, srednee: %f\n", k_nch, (float) summ_nch / k_nch);

	return 0;
}

