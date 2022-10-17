#include "main.h"

int f_id(int ch)
{
	switch (ch)
	{
		case 's':
		case 'c':
		case 'i':
		case 'd':
			return (0);
	}
	return (1);
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


