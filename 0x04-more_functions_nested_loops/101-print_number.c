#include "main.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 */

void print_number(int n)
{
	    int last_d = -1;
    int pow = 1;
    int d;

    if (n < 0)
    {
        _putchar('-');
        last_d = '0' - (n % 10);
        n /= 10;
        n = -n;
    }
    else if (n > 9)
    {
        last_d = '0' + (n % 10);
        n /= 10;
    }
    else
    {
        _putchar(n + '0');
    }

    while (pow * 10 <= n)
        pow *= 10;

    while (pow != 0)
    {
        d = n / pow;
        if (n)
            _putchar(d + '0');
        n = n - (d * pow);
        pow /= 10;
    }
    if (last_d != -1)
        _putchar(last_d);
}
