#include "main.h"

/**
 * u_printf - print unsigned ints from va_arg for _printf.c
 * @src: int to print
 *
 * Return: number of characters printed
 */

int u_printf(_ui src)
{
	_ui tmp, len = 0;
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
		u_printf(tmp / 10);
		n = tmp % 10 + '0';
		break;
	}
	write(1, &n, 1);
	return (len);
}
