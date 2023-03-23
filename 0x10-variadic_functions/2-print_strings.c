#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *msg = va_arg(args, char *);

		printf("%s", msg ? msg : "(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
