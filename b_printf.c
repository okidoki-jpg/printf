#include "main.h"

/**
 * b_printf - convert unsigned int to binary
 * @args: va_list with number to convert
 * 
 * Return: number of values printed
 */

int b_printf(va_list *args)
{
	_ui quo, rem, src;
	int idx, len = 0;
	char *buf;

	src = va_arg(*args, _ui);
	if (!src)
		return (-1);

	for (quo = src; quo > 0; quo /= 2)
		len++;

	buf = malloc(sizeof(char) * len + 1);
	if (!buf)
		return (-1);

	idx = len;
	buf[idx] = '\0';
	for (quo = src; quo > 0; quo /= 2)
	{
		rem = quo % 2;
		buf[--idx] = rem + '0';
	}
	write(1, buf, len);
	free(buf);
	return (len);
	
}
