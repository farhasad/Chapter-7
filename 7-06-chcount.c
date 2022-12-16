#include <stdio.h>
#define PERIOD '.'
int main (void)
{
	char ch;
	int charcount = 0;
	while(ch=getchar()!=PERIOD)
	{
		if(ch!='"'&&ch!='\'')
			charcount++;
	}
	printf("Zdes' imeetsya %d simvolov, otlichnyh ot kovychek.\n", charcount);
	return 0;
}
