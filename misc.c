#include "main.h"

/**
 * f_id - check format specifier type
 * @ch: character to evaluate
 *
 * Return: 1 if found, else 0
 */

int f_id(char ch)
{
	char *c = "scid%";

	while (*c)
	{
		if (*c == ch)
			return (1);
		c++;
	}
	return (0);
}

/**
 * _strlen - get string length
 * @str: string to evaluate
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}


