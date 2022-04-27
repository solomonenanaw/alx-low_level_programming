#include "main.h"
/**
 * _strlen_recursion - function to return length of the string
 * @s: string
 * @a: value
 * Return : nothing
 */

int _strlen_recursion(char *s)
{
int a = 0;

if (*s != '/0')
a = 1 + _strlen_recursion(s + 1)
return a;
else 
return (0);
}
