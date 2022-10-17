#include "main.h"

char *int_res(int src)
{
	char *str;
	int tmp, len = 0;

	for (tmp = src; tmp > 0; tmp /= 10)
		len++;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	
	str[len] = '\0';
	for (tmp = src; tmp > 0; tmp /= 10)
	{
		str[--len] = tmp % 10 + '0';
	}
	return (str);
}
