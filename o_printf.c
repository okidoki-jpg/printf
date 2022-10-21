#include "main.h"

/**
 * o_printf - print octal ints from va_arg for _printf.c
 * @args: va_list with int to print
 *
 * Return: number of characters printed
 */

int o_printf(va_list *args)
{
	unsigned int quo, rem, src;
	int idx, len = 0;
	char *buf;

	src = va_arg(*args, unsigned int);

	for (quo = src; quo > 0; quo /= 8)
		len++;

	if (!len)
		return (-1);

	buf = malloc(sizeof(char) * len + 1);
	if (!buf)
		return (-1);

	idx = len;
	buf[idx] = '\0';
	for (quo = src; quo > 0; quo /= 8)
	{
		rem = quo % 8;
		buf[--idx] = rem + '0';
	}
	write(1, buf, len);
	free(buf);
	return (len);
}
