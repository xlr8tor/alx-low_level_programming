#include "lists.h"
/**
 * print_function - prints a string before main executes
 */
void __attribute__((constructor)) print_function()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
