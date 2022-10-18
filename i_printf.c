#include "main.h"

/**
 * i_printf - print ints from va_arg for _printf.c
 * @src: int to print
 *
 * Return: number of characters printed
 */

int i_printf(int src)
{
	int tmp, len = 0;
	char n;

	if (src < 0)
	{
		src *= -1;
		write(1, "-", 1);
	}

	for (tmp = src; tmp > 0; tmp /= 10)
		len++;

	if (len == 0)
		return (len);

	for (tmp = src; tmp > 0;)
	{
		i_printf(tmp / 10);
		n = tmp % 10 + '0';
		break;
	}
	write(1, &n, 1);
	return (len);
}
