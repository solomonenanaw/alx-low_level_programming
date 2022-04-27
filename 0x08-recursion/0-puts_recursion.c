#include "main.h"

/**
 * _puts_recursion - returns string
 * @s: string
 * Return : always zero
 */
void _puts_recursion(char *s)
{
if (*s != '0')
_putchar(*s);
else
_putchar ('\n');
}

int main(void)
{
return _puts_recursion();
}
