#include "main.h"
/**
 * print_sign  - cheeck if the character is lower
 * @n: the number of character
 * Return: one if character is lower
 */


int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('_');
return (-1);
}
}
