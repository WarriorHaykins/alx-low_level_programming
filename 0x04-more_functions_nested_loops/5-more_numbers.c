#include "main.h"
/**
 *more_numbers - prints 10 times numbers from 0 t0 14
 */

void more_numbers(void)
{
int j;
int i;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; i++)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
}
_putchar('\n');
}
}
