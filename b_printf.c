#include "main.h"

/**
 * b_printf - convert unsigned int to binary
 * @src: number to convert
 * 
 * Return: converted number
 */

int b_printf(_ui src)
{
	_ui quo, rem;
	int len = 0;
	char n;

	if (src > 0)
	{
		quo = src / 2;
		rem = src % 2;
		len++;
		len += b_printf(quo);
		n = rem + '0';
		write(1, &n, 1);
	}
	return (len);
	
}
