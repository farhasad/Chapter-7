#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
	char c;				// prochitannyi simvol
	char prev;			// predydushii prochitannyi simvol
	long n_chars = 0L;		// kolichestvo simvolov
	int n_lines = 0;		// kolichestvo strok
	int n_words = 0;		// kolichestvo slov
	int p_lines = 0;		// kolichestvo nepolnyh strok
	bool inword = false;		// = = true, esli simvol C nahoditsya vnutri slova

	printf("Vvedite tekst dlya analiza ( | dlya zaversheniya):\n");
	prev = '\n';
	while((c=getchar())!=STOP)
	{
		n_chars++;		// schitat' simvoly
		if(c=='\n')
			n_lines++;	// schitat' stroki
		if(!isspace(c)&&!inword)
		{
			inword = true;	// nachalo novogo slova
			n_words++;	// schitat' slova
		}
		if(isspace(c)&&inword)
			inword = false;	// dostignut konec slova
		prev = c;
	}
	if(prev!='\n')
		p_lines = 1;
	printf("simvolov = %ld, slov = %d, strok = %d,", n_chars, n_words, n_lines);
	printf("nepolnyh strok = %d\n", p_lines);
	return 0;
}
