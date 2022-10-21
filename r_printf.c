#include "main.h"

/**
 * r_printf - print string in reverse
 * @args: va_list with string to convert
 *
 * Return: number of characters printed
 */

int r_printf(va_list *args)
{
	char *src = va_arg(*args, char *);
	int len = _strlen(src), idx = len;

	while (idx)
		write(1, &src[--idx], 1);
	return (len);
}
