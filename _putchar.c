#include "main.h"

/**
 * _putchar - output a single character
 * @c: character to output
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
