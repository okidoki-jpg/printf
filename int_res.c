#include "main.h"

int int_res(int src)
{
	int tmp, len = 0;
	char n;

	if (src < 0)
	{
		src *= -1;
		write(1, "-", 1);
	}

	for (tmp = src; tmp > 0; tmp /= 10)
		len++;

	if (len == 0)
		return (len);

	for (tmp = src; tmp > 0;)
	{
		int_res(tmp / 10);
		n = tmp % 10 + '0';
		break;
	}
	write(1, &n, 1);
	return (len);
}
