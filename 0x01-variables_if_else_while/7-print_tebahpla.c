#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints spelling in reverse from z to a
 *
 * Return: Always (Success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
