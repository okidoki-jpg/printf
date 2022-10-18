#include "main.h"

/**
 * s_printf - print string from va_arg for _printf.c
 * @src: string to print
 *
 * Return: nunber of characters printed
 */

int s_printf(char *src)
{
	int len = _strlen(src);

	write(1, src, len);
	return (len);
}
