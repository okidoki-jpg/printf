#include "../main.h"
#include<stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int main(void)
{
    char *str = "Anny";
    _printf("%s %c. turns %d in %i days.\n", str, 'Q', 63, -3);
    return (0);
}
