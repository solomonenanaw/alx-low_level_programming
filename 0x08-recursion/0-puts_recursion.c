#include "main.h"

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
}	
else
{
_putchar('\n');
}
}
