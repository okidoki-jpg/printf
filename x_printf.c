#include "main.h"

/**
 * x_printf - print lowercase hex vals from va_arg for _printf.c
 * @args: va_list with int to convert
 *
 * Return: number of characters printed
 */

int x_printf(va_list *args)
{
    _ui rem, quo, src, len = 0, idx = 0;
    char *buf, i;

	src = va_arg(*args, _ui);
    if (src < 0)
	{
        src *= -1;
	}

	for (quo = src; quo > 0; quo /= 16)
		len++;

	buf = malloc(sizeof(char) * len + 1);
	if (!buf)
		return (-1);

	buf[len] = '\0';
	idx = len;
	for (quo = src; quo != 0;)
    {
		i = '0';
        rem = quo % 16;
        if (rem > 9)
            i = '7' + 32;
        buf[--idx] = (i + rem);
		quo /= 16;
    }

    write(1, buf, len);
	free(buf);
    return (len);
}
