#include <stdio.h>
int main(void)
{
	int a, b, c;
	char ch;
	a = b = c = 0;
	while((ch=getchar())!='#')
	{
		if(ch==' ')
			a++;
		else if(ch=='\n')
			b++;
		else
			c++;
	}
	printf("Kolichestvo probelov: %d, simvolov novoi stroki: %d, ostal'nyh simvolov: %d", a, b, c);
	return 0;
}

