#include "main.h"

/**
 * _puts_recursion - returns string
 * @s: string
 * Return : always zero
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
}
