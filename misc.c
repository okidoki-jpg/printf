#include "main.h"

int f_id(char ch)
{
	switch (ch)
	{
		case 's':
		case 'c':
		case 'i':
		case 'd':
			return (1);
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


