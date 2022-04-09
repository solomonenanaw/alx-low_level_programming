#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
char a;
for (a = '1'; a <= '9'; a++)
{
putchar(a);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
