#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 *  * print_all - Entry Point
 *   * c = char, i = int, f = float, s = char * (if null print (nil))
 *	* @format: list of arg types
 *	 * Return: 0
 */
char *ch_res(char src, int src_len);
char *str_res(char *src, int src_len);
char *int_res(int src, int len);
int alpha(int ch);

void _printf(const char *format, ...)
{
	char *src, *str, *schar, s;
	int len, i = 0, n, tmp;
	va_list valist;

	va_start(valist, format);
	while (format[i])
	{
		len = 0;
		if (format[i] == '%' && alpha(format[i + 1]))
		{
		   switch (format[i + 1])
			{
				case 'd':
				case 'i':
					n = va_arg(valist, int);
					for (tmp = n; tmp > 0; tmp /= 10)
						len++;
					schar = int_res(n, len);
					write(1, schar, len);
					free(schar);
					i++;
					break;
				case 'c':
					s = va_arg(valist, int);
					schar = ch_res(s, 1);
					write(1, schar, 1);
					free(schar);
					i++;
					break;

				case 's':
					src = va_arg(valist, char *);
					if (!src)
					   src = "(nil)";
					while (src[len])
					{
					  len++;
					}

					str = str_res(src, len);
					write(1, str, len);
					free(str);
					i++;
			}
		}
		else
		{
			schar = ch_res(format[i], 1);
			write(1, schar, 1);
			free(schar);
		}
		i++;
	}

	va_end(valist);
}


char *str_res(char *src, int src_len)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * src_len);
	if (!str)
		return (NULL);

	while (src[i])
	{
		str[i] = src[i];
		i++;
	}

	return (str);
}

char *ch_res(char src, int src_len)
{
	char *str;

	str = malloc(sizeof(char) * src_len);
	if (!str)
		return (NULL);

	*str = src;

	return (str);
}

char *int_res(int src, int len)
{
	char *str;
	int tmp;
	
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	
	for (tmp = src; tmp > 0; tmp /= 10)
	{
		str[--len] = tmp % 10 + '0';
	}
	
	return (str);
}

int alpha(int ch)
{
	if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
		return (1);
	return (0);
}


