#include "main.h"

/**
 * c_printf - print char from va_arg for _printf.c
 * @src: character to print
 *
 * Return: number of chars printed
 */

int c_printf(char src)
{
	int len = sizeof(char);

	write(1, &src, len);
	return (len);
}
