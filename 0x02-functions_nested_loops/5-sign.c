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
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (1);
}
else if (n == 0)
{
_putchar(48);
}
return (0);
}
