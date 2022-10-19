#include "main.h"

/**
 * o_printf - print octal ints from va_arg for _printf.c
 * @args: va_list with int to print
 *
 * Return: number of characters printed
 */

int o_printf(va_list *args)
{
	_ui quo, rem, src;
	int idx, len = 0;
	char *buf;

	src = va_arg(*args, _ui);

	for (quo = src; quo > 0; quo /= 8)
		len++;

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
