#include <stdio.h>
int main (void)
{
	char ch;
	int replace = 0;
	
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case '.':
				putchar('!');
				replace++;
				continue;
			case '!':
				putchar('!');
				putchar('!');
				replace++;
				continue;
			default:
				putchar(ch);
		}
	}
	printf("\n Kolichestvo zamen: %d", replace);
	return 0;
}
