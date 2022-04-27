#include "main.h"

/**
 * _puts_recursion - returns string
 * @s: string
 * Return : always zero
 */
void _puts_recursion(char *s)
{
if (*s != '0')
return;
else
_putchar('\n');
_putchar(s);
}

int main(void)
{
char *s;
return _puts_recursion();
}
