#include <stdio.h>
#include <stdlib.h>

int notvowel(char v)
{
	return ((v != 'a' && v != 'A' &&
		v != 'e' && v != 'E' &&
		v != 'i' && v != 'I' &&
		v != 'o' && v != 'O' &&
		v != 'u' && v != 'U' &&
		v != 'y' && v != 'Y') ? 1 : 0);
}

int isletter(char L)
{
	return ((L >= 'A' && L <= 'Z' || L >= 'a' && L <= 'z') ? 1 : 0);
}

void main(int num, char *arg[])
{
	FILE *read;
	char punc1[25], punc2[25], remain[25], begin[25];
	int g;
	int x, r = 0, b = 0, bad = 0, p1 = 0, p2 = 0;

	if (num == 1)
		read = stdin;
	else if ((read = fopen(arg[1], "r")) == NULL) {
		fflush(stdout);
		fprintf(stderr, "cannot open %s\n", arg[1]);
		exit(1);
	}

	while ((g = getc(read)) != EOF) {
		if (g != ' ' && g != '\t' && g != '\n' && g != '/' && g != '-') {
			if (r > 25 || b > 25 || p1 > 25 || p2 > 25)
				{ fprintf(stderr, "**WORD TOO LONG**\n"); exit(1); }
			else if (!isletter(g) && r == 0 && b == 0)
				punc1[p1++] = g;
			else if (isletter(g) && notvowel(g) && r == 0)
				begin[b++] = g;
			else if (!isletter(g))
				punc2[p2++] = g;
			else if (p2 > 0) {
				for (x = 0; x < p2; x++)
					remain[r++] = punc2[x];
				bad = 1; p2 = 0;
				remain[r++] = g;
			}
			else
				remain[r++] = g;
			continue;
		}

		remain[r] = begin[b] = punc1[p1] = punc2[p2] = '\0';

		if (r < 2 || b == 0 || bad)
			printf("%s%s%s%s%c", punc1, begin, remain, punc2, g);
		else
			printf("%s%s-%say%s%c", punc1, remain, begin, punc2, g);

		r = b = p1 = p2 = bad = 0;
	}
}

