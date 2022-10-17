#include "main.h"

int _putchar(int c)
{
	char *s;
	
	s = malloc(sizeof(char) * 1);
	if (!s)
		return (-1);
	*s = c;
	write(1, s, 1);
	return (0);
}
