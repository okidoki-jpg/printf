#include "main.h"

/**
 * u_printf - print unsigned ints from va_arg for _printf.c
 * @args: va_list with int to print
 *
 * Return: number of characters printed
 */

int u_printf(va_list *args)
{
	unsigned int quo, rem, src;
	int idx = 0, len = 0;
	char *buf;

	src = va_arg(*args, unsigned int);

	for (quo = src; quo > 0; quo /= 10)
		len++;

	buf = malloc(sizeof(char) * len + 1);
	if (!buf)
		return (-1);

	buf[len] = '\0';
	idx = len;
	for (quo = src; quo > 0; quo /= 10)
	{
		rem = quo % 10;
		buf[--idx] = rem + '0';
	}
	write(1, buf, len);
	free(buf);
	return (len);
}
