#include <stdio.h>
int main (void)
{
	char ch;
	int replace = 0;
	
	while((ch=getchar())!='#')
	{
		if(ch=='.')
		{
			putchar('!');
			replace++;
		}
		else if(ch=='!')
		{
			putchar('!');
			putchar('!');
			replace++;
		}
		else
			putchar(ch);
	}
	printf("\n Kolichestvo zamen: %d", replace);
	return 0;
}
