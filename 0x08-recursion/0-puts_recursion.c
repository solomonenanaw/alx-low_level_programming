#include "main.h"

/**
 * _puts_recursion - function to print string
 * @s: string
 * Return: Always zero
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
}
}
