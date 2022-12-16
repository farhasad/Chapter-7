#include<stdio.h>
int main(void)
{
	char ch;
	char ch_prev = ' ';
	int N = 0;
	
	while((ch=getchar())!='#')
	{
		if((ch_prev=='e')&&(ch=='i'))
			N++;
		ch_prev = ch;
	}
	printf("Kolichestvo vhozhdenii posledovatelnosti: %d", N);
	return 0;
}
