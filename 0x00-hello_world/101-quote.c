#include<stdio.h>

/**
* main - Entry point
*
* Return: 1
*/

int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(err, sizeof(err) - 1, 1, stderr);
	return (1);
}
