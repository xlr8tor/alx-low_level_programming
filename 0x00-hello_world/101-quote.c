#include<stdio.h>

/**
* main - Entry point
*
* Return: 1
*/

int main(void)
{
	char error[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(error, sizeof(error) - 1, 1, stderr);
	return (1);
}
