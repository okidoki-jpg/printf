#include "main.h"

/**
 * X_printf - print uppercase hex vals from va_arg for _printf.c
 * @src: int to convert
 *
 * Return: number of characters printed
 */

int X_printf(_ui src)
{
    _ui tmp, rem, quo, len = 0;
    char n, i = '0';

    if (src < 0)
    {
        src *= -1;
        write(1, "-", 1);
    }

    for (tmp = src; tmp > 0;)
    {
		len++;
		rem = tmp % 16;
		quo = tmp / 16;
		if (rem > 9)
			i = '7';
		n = i + rem;
		if (quo > 0)
        	X_printf(quo);
        break;
    }
    write(1, &n, 1);
    return (len);
}
