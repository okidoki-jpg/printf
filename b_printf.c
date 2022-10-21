#include "main.h"

/**
 * b_printf - convert unsigned int to binary
 * @args: va_list with number to convert
 *
 * Return: number of values printed
 */

int b_printf(va_list *args)
{
	unsigned int quo, rem, src;
	int idx, len = 0;
	char *buf;

	src = va_arg(*args, unsigned int);

	for (quo = src; quo > 0; quo /= 2)
		len++;

	if (!len)
		return (-1);

	buf = malloc(sizeof(char) * len);
	if (!buf)
		return (-1);

	idx = len;

	for (quo = src; quo > 0; quo /= 2)
	{
		rem = quo % 2;
		buf[--idx] = rem + '0';
	}
	write(1, buf, len);
	free(buf);
	return (len);
}
