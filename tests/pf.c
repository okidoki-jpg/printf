#include<stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

char *ch_res(va_list src, int src_len);
int _putchar(int c);
int alpha(int ch);
void _printf(const char *buf, ...);

int main(void)
{
    //char *str = "maddy";
    _printf("%c turbs 5 today", 'J');
    return 0;
}

void _printf(const char *buf, ...)
{
    char *schar;
    int len, i = 0, c;
    va_list valist;
    
    va_start(valist, buf);
    while (buf[i])
    {
        len = 0;
        if (buf[i] == '%' && alpha(buf[i + 1]))
        {
           switch (buf[i + 1])
            {
                case 'c':
                    //src = va_arg(valist, int);
                    schar = ch_res(valist, len++);
                    write(1, schar, 1);
                    free(schar);
                    i++;
                    break;
            
            }
        }
        else
        {
			c = buf[i];
            _putchar(c);
        }
        i++;
    }

    va_end(valist);
}

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

char *ch_res(va_list src, int src_len)
{
    char *str;
    int s;
    s = va_arg(src, int);
    
    str = malloc(sizeof(char) * src_len);
    if (!str)
        return (NULL);
 
    *str = s;
    
    return (str);
}

int alpha(int ch)
{
    if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
        return (1);
    return (0);
}


