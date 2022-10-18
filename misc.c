#include "main.h"

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

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}


