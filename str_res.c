#include "main.h"

char *str_res(char *src)
{
	char *str;
	int i = 0, len = _strlen(src);

	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);

	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';

	return (str);
}
