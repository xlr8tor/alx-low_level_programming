#include <stdio.h>

void jack_bauer(void);

int main(void)
{
	jack_bauer();
	return (0);
}

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			int n1 = i / 10;
			int n2 = i % 10;
			int n3 = j / 10;
			int n4 = j % 10;

			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(':');
			putchar(n3 + '0');
			putchar(n4 + '0');
			putchar('\n');	
		}
	}
}
