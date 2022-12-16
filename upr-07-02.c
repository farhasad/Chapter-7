#include <stdio.h>
int main(void)
{
	char ch;
	int n=0;
	while((ch=getchar())!='#')
	{
		putchar(ch);
		printf(" - %3d, ", (int) ch);
		if((++n%8)==0)
			printf(";\n");
	}
	return 0;
}
