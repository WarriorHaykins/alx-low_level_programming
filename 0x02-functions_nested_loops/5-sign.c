#include "main.h"
/**
*print_sign - to check the sign of a digit.print + or - or 0
*@n: to be printed
*Return: + or - or 0
*/

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
if (n < 0)
{
return (-1);
_putchar('-');
}
else
{
return (0);
_putchar('0');
}
}
