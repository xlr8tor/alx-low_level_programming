#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * @...: variable argument
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *msg = "(nil)";

	va_start(args, format);
	while (format && format[i])
	{
		int flag = 1;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				msg = va_arg(args, char *);
				if (!msg)
					msg = "(nil)";
				printf("%s", msg);
				break;
			default:
				flag = 0;
				break;
		}
		if (format[i + 1] && flag)
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}
