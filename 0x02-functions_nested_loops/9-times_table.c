#include <stdio.h>



void times_table(void);

int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			printf("%3d", i * j);
			if (j < 9)
				putchar(',');
		}
	
	printf("\n");
	}
}

