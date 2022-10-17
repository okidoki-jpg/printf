#include "main.h"

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
