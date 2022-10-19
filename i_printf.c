#include "main.h"

/**
 * i_printf - print ints from va_arg for _printf.c
 * @args: va_list with int to print
 *
 * Return: number of characters printed
 */

int i_printf(va_list *args)
{
	int idx, quo, rem, src, len = 0, neg = 0;
	char *buf;

	src = va_arg(*args, int);

	if (src < 0)
	{
		src *= -1;
		len++;
		neg++;
	}

	for (quo = src; quo > 0; quo /= 10)
		len++;

	buf = malloc(sizeof(char) * len + 1);
	if (!buf)
		return (-1);

	idx = len;
	buf[len] = '\0';
	for (quo = src; quo > 0; quo /= 10)
	{
		rem = quo % 10;
		buf[--idx] = rem + '0';
	}
	if (neg)
        buf[--idx] = '-';
	write(1, buf, len);
	free(buf);
	return (len);
}
