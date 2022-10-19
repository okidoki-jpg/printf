#include "main.h"

/**
 * s_printf - print string from va_arg for _printf.c
 * @args: va_list with string to print
 *
 * Return: nunber of characters printed
 */

int s_printf(va_list *args)
{
	char *src = va_arg(*args, char *);
	int len = _strlen(src);

	write(1, src, len);
	return (len);
}
